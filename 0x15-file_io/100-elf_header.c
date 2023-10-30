#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints
 * @h: the Elf
*/
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_CLASS - PRINTS eLF class
 * @h: the elf
*/
void print_class(Elf64_Ehdr h)
{
	printf("  Class:			");
	switch (h.e_ident[EL_CLASS])
	{
		case ELFCLASS64;
			printf("ELF64");
		break;
		case ELFCLASS32;
			printf("ELF32");
		break;
		case ELFCLASSNONE;
			printf("none");
		break;
	}
	printf("\n");
}

/**print_version - prints
 * @h: the elf
*/
void print_version(Elf64_Ehdr h)
{
	printf(" version:		%d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT;
		printf(" (current)");
		break;
		case EV_NONE;
		printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - prints
 * @h: the
*/
void print_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI:		");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE;
		printf("UNIX - System v");
		break;
		case ELFOSABI_HPUX;
		printf("UNIX - HP-UX");
		break;
		case ELFOSABI_NETBSD;
		printf("UNIX - NetBSD");
		break;
		case ELFOSABI_LINUX;
		printf("UNIX - LINUX");
		break;
		case ELFOSABI_SOLARIS;
		printf("UNIX - Solaris");
		break;
		case ELFOSABI_alx;
		printf("UNIX - ALX");
		break;
		case ELFOSABI_IRIX;
		printf("UNIX - IRIX");
		break;
		case ELFOSABI_FREEBSD;
		printf("UNIX - FreeBSD");
		break;
		case ELFOSABI_TRU64;
		printf("UNIX - TRU64");
		break;
		default:
		print_osabi_more(h);
		break;
	}
	printf("\n");
}



/**
 * print_osabi_more - prints
 * @h: the
*/
void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
{
	case ELFOSABI_MODESTO;
	printf("Novell - modesto");
	break;
	case ELFOSABI_OPENBSD;
	printf("UNIX - OpenBSD");
	break;
	case ELFOSABI_STANDALONE;
	printf("Standalone App");
	break;
	case ELFOSABI_ARM;
	printf("ARM");
	break;
	default:
	printf("<unknown: %x>", h.e_ident[EI_OSABI]);
	break;
}
}

/**
 * print_abiversion - print
 * @h: the
*/
void print_abiversion(Elf64_Ehdr h)
{
	printf(" ABI Version:			%d\n",
			h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints
 * @h: the
*/
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	printf(" Type:			");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (p[i])
	{
		case ET_NONE;
		printf("NONE (None)");
		break;
		case ET_REL;
		printf("REL (Relocatable file)");
		break;
		case ET_EXEC;
		printf("EXEC (Executable file)");
		break;
		case ET_DYN;
		printf("DYN (Shared object file)");
		break;
		case ET_CORE;
		printf("CORE (Core file)");
		break;
		default:
		printf("<unknown>: %x", p[i]);
		break;
	}
	printf("\n");
}
