#include "main.h"

/**
 * append_text_to_file - the end of a file.
 * @filename: A pointer file.
 * @text_content: text to the string
 * yusuf nurudeen
 * Return: fumction -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	w = write(z, text_content, len);

	if (z == -1 || w == -1)
		return (-1);

	close(z);

	return (1);
}

