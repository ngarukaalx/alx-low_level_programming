#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * magic - print magic
 * @e:pointer
 */

void magic(unsigned char *e_ident)
{

	int i;

	printf("  Magic:  ");
	for (i = 0; i <  EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i ==  EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class - prints class of elf header
 * @e:pointer to array containig elf class
 */

void class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data - prints data
 * @e_ident:pointer to array
 */

void data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * version - prints version of elf
 * @e_ident:arr containing version
 */

void version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osabi - prints osabi
 * @e_ident: pointer to array
 */

void osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi - displays abi
 * @e_ident:pointer to array
 */

void abi(unsigned char *e_ident)
{

	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * type - displays type of elf
 * @e_type:elf type
 * @e_ident:array
 */

void type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry - displays entry point
 * @y:addres of entry point
 * @e_ident:array
 */

void entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);

}

/**
 * get_el100-elf_header.cf_header - gets header
 * @elf:pointer
 *
 * Return:elf
 */

Elf64_Ehdr *get_elf_header(Elf64_Ehdr *elf)
{

	if (elf->e_ident[EI_MAG0] != ELFMAG0 ||
		elf->e_ident[EI_MAG1] != ELFMAG1 ||
		elf->e_ident[EI_MAG2] != ELFMAG2 ||
		elf->e_ident[EI_MAG3] != ELFMAG3)
	{
		perror("Error:not an ELF file\n");
		exit(98);
	}
	return (elf);
}

/**
 * main - displays the information contained in the ELF header at
 * the start of an ELF file.
 * @argc:number of counts
 * @argv:pointer to characters
 *
 * Return:0 on succes
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *elf;

	int ope, rea;

	if (argc < 2)
	{
		exit(98);
	}
	ope = open(argv[1], O_RDONLY);
	if (ope == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't read file%s\n", argv[1]);
		exit(98);
	}
	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		close(ope);
		dprintf(STDERR_FILENO, "Error:can't read file %s\n", argv[1]);
		exit(98);
	}
	rea = read(ope, elf, sizeof(Elf64_Ehdr));
	if (rea == -1)
	{
		free(elf);
		close(ope);
		dprintf(STDERR_FILENO,"Error:%s:no file\n", argv[1]);
		exit(98);
	}
	get_elf_header(elf);
	printf("ELF Header:\n");
	magic(elf->e_ident);
	class(elf->e_ident);
	data(elf->e_ident);
	version(elf->e_ident);
	osabi(elf->e_ident);
	abi(elf->e_ident);
	type(elf->e_type, elf->e_ident);
	entry(elf->e_entry, elf->e_ident);

	free(elf);
	close(ope);
	return(0);
}
