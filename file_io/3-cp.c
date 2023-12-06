#include "main.h"

/**
 * print_error - handle error message and exit from main
 * @error: int to tell what kind of error it is
 * @argv: argument needed for some of the errors
 */

void print_error(int error, char *argv[])
{
	if (error == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (error == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (error == 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * main - copies the content of a file to another
 * @argc: number of argument
 * @argv: value of the arguments
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_from, write_to;
	char buffer[1024];
	char *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
		print_error(2, argv);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(0, argv);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(1, argv);
	while ((read_from = read(fd_from, buffer, 1024)) > 0)
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to == -1)
			print_error(1, argv);
	}
	if (read_from == -1)
		print_error(0, argv);
	if (close(fd_from) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}
