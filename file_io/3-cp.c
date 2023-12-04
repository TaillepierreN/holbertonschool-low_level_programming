#include "main.h"

/**
 * file_from - copies the content of a file to another
 * @argc: number of argument
 * @argv: value of the arguments
*/

int main(int argc, char **argv[])
{
	int file_from, file_to, read_from, write_to;
	char buffer[1024];

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
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
	while (read_from)
	{
		read_from = read(file_from, buffer, 1024);
		if (read_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (read_from > 0)
		{
			write_to = write(file_to, buffer, read_from);
			if (write_to == -1)
			{
				dprintf(2, "Error: Can't write from file %s\n", argv[2]);
				exit(99);
			}
		}
	}
	if (close(file_from == -1))
	{
		dprintf(2, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to == -1))
	{
		dprintf(2, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
}
