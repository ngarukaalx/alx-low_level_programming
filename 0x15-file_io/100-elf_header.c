#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * openElfFile - open an elf file
 * @elf_filename:file to open
 *
 * Return:pointer to elf
 */

Elf64_Ehdr *openElfFile(char *elf_filename)
{
	int fd;

	Elf64_Ehdr *elf;

	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error open");
		exit(98);
	}
	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		perror("Error malloc");
		exit(98);
	}

	if (read(fd, elf, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Error read");
		exit(98);
	}
	close(fd);
	return (elf);
}

/**
 * get_elf_header - gets header
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
 * print_elf_header - prints elf header
 * @ehdr:pointer
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
	printf("  Class:		%s\n", (ehdr->e_ident[EI_CLASS] == ELFCLASS64) ?
			"ELF64" : "ELF32");
	printf("  Data:			%s\n", (ehdr->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:		%u\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:		%u\n", ehdr->e_ident[EI_OSABI]);
	printf("  ABI Version:		%u\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:			%u\n", ehdr->e_type);
	printf("  Entry point address:	%#010lx\n", ehdr->e_entry);
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

	Elf64_Ehdr *ehdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "usage: %s Error\n", argv[0]);
		exit(98);
	}
	elf = openElfFile(argv[1]);
	ehdr = get_elf_header(elf);
	print_elf_header((Elf64_Ehdr *) ehdr);

	free(elf);
	return (0);
}
