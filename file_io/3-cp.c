#include "main.h"

/**
 * print_error - handle error message and exit from main
 * @error: int to tell what kind of error it is
 * @argv: argument needed for some of the errors
 * @file: int of the file needed for some errors
 */
void print_error(int error, char *argv[], int file)
{
	if (error == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (error == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write into file %s\n", argv[2]);
		exit(99);
	}
	else if (error == 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (error == 3)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file);
		exit(100);
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
	int file_from, file_to, read_from, write_to;
	char buffer[1024];

	if (argc != 3)
		print_error(2, argv, 0);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error(0, argv, 0);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		print_error(1, argv, 0);
	read_from = 1;
	while ((read_from = read(file_from, buffer, 1024)) > 0)
	{
		if (read_from == -1)
			print_error(0, argv, 0);
		write_to = write(file_to, buffer, read_from);
		if (write_to == -1)
			print_error(1, argv, 0);
	}

	if (close(file_from) == -1)
		print_error(3, argv, file_from);
	if (close(file_to) == -1)
		print_error(3, argv, file_to);
	return (0);
}
