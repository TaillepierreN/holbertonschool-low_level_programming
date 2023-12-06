#include "main.h"

/**
 * print_error_exit - handle error message and exit from main
 * @msg: error message
 * @argstr: string argument if relevant,else empty
 * @argint: int argument if relevant, else 0
 * @errnum: error int to return with exit
 */
void print_error_exit(char *msg, char *argstr, int argint, int errnum)
{
	if (errnum >= 97 && errnum <= 99)
		dprintf(2, msg, argstr);
	else
		dprintf(2, msg, argint);
	exit(errnum);
}
/**
 * main - copies the content of a file to another
 * @argc: number of argument
 * @argv: value of the arguments
 * Return: success (0)
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, read_from, write_to;
	char buffer[1024];

	if (argc != 3)
		print_error_exit("Usage: %s file_from file_to\n", argv[0], 0, 97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error_exit("Error: Can't read from file %s\n", argv[1], 0, 98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		print_error_exit("Error: Can't write from file %s\n", argv[2], 0, 99);
	read_from = 1;
	while (read_from > 0)
	{
		read_from = read(file_from, buffer, 1024);
		if (read_from == -1)
			print_error_exit("Error: Can't read from file %s\n", argv[1], 0, 98);
		if (read_from > 0)
		{
			write_to = write(file_to, buffer, read_from);
			if (write_to == -1)
				print_error_exit("Error: Can't write from file %s\n", argv[2], 0, 99);
		}
	}
	if (close(file_from) == -1)
		print_error_exit("Error: can't close fd %d\n", "", file_from, 100);
	if (close(file_to) == -1)
		print_error_exit("Error: can't close fd %d\n", "", file_to, 100);
	return (0);
}
