#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * wittten by nurudeen
 * Return: 1, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int cc;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	cc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(cc, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(cc);

	return (1);
}
