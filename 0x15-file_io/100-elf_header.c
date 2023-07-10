#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

Elf64_Ehdr *openElfFile(char *elf_filename)
{
    int fd;
    Elf64_Ehdr *elf;

    fd = open(elf_filename, O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        exit(98);
    }

    elf = malloc(sizeof(Elf64_Ehdr));
    if (elf == NULL)
    {
        perror("Error allocating memory");
        exit(98);
    }

    if (read(fd, elf, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        perror("Error reading file");
        free(elf);
        exit(98);
    }

    close(fd);
    return elf;
}

Elf64_Ehdr *get_elf_header(Elf64_Ehdr *elf)
{
    if (elf->e_ident[EI_MAG0] != ELFMAG0 ||
        elf->e_ident[EI_MAG1] != ELFMAG1 ||
        elf->e_ident[EI_MAG2] != ELFMAG2 ||
        elf->e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(98);
    }

    return elf;
}

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
    printf("  Class:                          %s\n", (ehdr->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                           %s\n", (ehdr->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                        %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                         %d\n", ehdr->e_ident[EI_OSABI]);
    printf("  ABI Version:                    %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                           %d\n", ehdr->e_type);
    printf("  Entry point address:            %#lx\n", (unsigned long)ehdr->e_entry);
}

int main(int argc, char *argv[])
{
    char *elf_filename;
    Elf64_Ehdr *elf_header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    elf_filename = argv[1];
    elf_header = openElfFile(elf_filename);
    elf_header = get_elf_header(elf_header);
    print_elf_header(elf_header);

    free(elf_header);
    return 0;
}

