#include "main.h"

/**
 * read_textfile - read a text file and prints it to the posix std output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: 0 if filename is NULL,if file can't be opened and read,if write fail
 * or does not write the expected amount of bytes else return number of 
 * letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nbr_read, nbr_written;
    char *buffer;

    if (!filename)
        return (0);
    fd = open(filename, O_RDONLY);
    buffer = malloc(letters * sizeof(char));
    if (fd == -1)
        return (0);
    nbr_read = read(fd, buffer, sizeof(letters));
    nbr_written = write(STDOUT_FILENO, buffer, nbr_read);

    if (nbr_written <= 0)
        return (0);

    return (nbr_written);

}
