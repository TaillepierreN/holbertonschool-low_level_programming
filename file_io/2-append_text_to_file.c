#include "main.h"

/**
 *append_text_to_file - append text at the end of a file
 *@filename: name of the file
 *@text_content: string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_to_modify, file_modified;

	if (!filename)
		return (-1);

	file_to_modify = open(filename, O_APPEND | O_WRONLY);
	if (file_to_modify == -1)
	{
		perror("File to modify doesn't exist");
		return (-1);
	}
	if (file_to_modify && !text_content)
	{
		perror("Nothing to add");
		return (1);
	}
	file_modified = write(file_to_modify, text_content, strlen(text_content));
	if (file_modified == -1)
	{
		perror("Can't modify the file");
		close(file_to_modify);
		return (-1);
	}
	close(file_to_modify);
	return (1);
}
