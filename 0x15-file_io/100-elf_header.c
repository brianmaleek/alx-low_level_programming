#include "main.h"
#include <elf.h>

/**
 * print_error - prints error message and exits with status of 98
 * @message: error message to print
*/
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_magic - prints the magic numbers of an ELF header
 * @magic: magic numbers
*/
void print_magic(const unsigned char *magic)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", magic[i]);
	}
	printf("\n");
}

/**
 * print_field - prints a field of an ELF header
 * @field_name: name of the field
 * @value: value of the field
*/
void print_field(const char *field_name, unsigned long long value)
{
	printf("%-20s %llx\n", field_name, value);
}

/**
 * print_header - prints the ELF header
 * @header: pointer to the header structure
*/
void print_header(const Elf64_Ehdr *header)
{
	print_magic(header->e_ident);
	print_field("Class:", header->e_ident[EI_CLASS]);
	print_field("Data:", header->e_ident[EI_DATA]);
	print_field("Version:", header->e_ident[EI_VERSION]);
	print_field("OS/ABI:", header->e_ident[EI_OSABI]);
	print_field("ABI Version:", header->e_ident[EI_ABIVERSION]);
	print_field("Type:", header->e_type);
	print_field("Entry point address:", header->e_entry);
}

/**
 * print_elf_header - Reads and prints the information contained
 *                  in the ELF header of the specified file
 * @filename: name of the ELF file
*/
void print_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open the file");
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Failed to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}

	print_magic(header.e_ident);
	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	print_version(header.e_ident[EI_VERSION]);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abi_version(header.e_ident[EI_ABIVERSION]);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
}

/**
 * main - displays the information contained in the ELF header at the start of
 * @argc: number of command line arguments
 * @argv: array of arguments line arguments
 * Return: the exit status of the program
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	print_elf_header(argv[1]);
	return (0);
}

