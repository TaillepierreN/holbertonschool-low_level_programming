#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: string to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_created, file_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file_created = open(filename, O_CREAT | O_TRUNC, 0600);
	if (file_created == -1)
		return (-1);
	file_written = write(file_created, text_content, strlen(text_content));
	if (file_written == -1)
	{
		perror("error");
		close(file_created);
		return (-1);
	}
	close(file_created);
	return (1);
}
