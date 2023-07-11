#include "main.h"

/**
 * create_file - to Creates a file.
 * @filename: A pointer to create.
 * @text_content: file pointer.
 * yusuf nurudeen
 * Return: -1
 */
int create_file(const char *filename, char *text_content)
{
	int z, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	z = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(z, text_content, len);

	if (z == -1 || w == -1)
		return (-1);

	close(z);

	return (1);
}

