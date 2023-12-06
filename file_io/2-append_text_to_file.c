#include "main.h"

/**
 *append_text_to_file - append text at the end of a file
 *@filename: name of the file
 *@text_content: string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_to_modify, file_modified, i;

	if (!filename)
		return (-1);

	file_to_modify = open(filename, O_CREAT | O_APPEND | O_RDWR);
	if (file_to_modify == -1)
	{
		perror("File to modify doesn't exist");
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i])
			i++;
		file_modified = write(file_to_modify, text_content, i);
	}
	if (file_modified == -1)
	{
		perror("Can't modify the file");
		close(file_to_modify);
		return (-1);
	}
	close(file_to_modify);
	return (1);
}
