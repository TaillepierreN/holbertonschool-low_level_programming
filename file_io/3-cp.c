#include "main.h"

/**
 * file_from - copies the content of a file to another
 * @argc: number of argument
 * @argv: value of the arguments
*/

int main(int argc, char **argv[])
{
	int file_from, file_to;
	if (argc != 3)
		{
			dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
			exit(97);
		}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	
}
