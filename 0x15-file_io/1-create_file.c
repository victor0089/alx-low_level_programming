#include "main.h"

/**
 * create_file - CrRRates a fiIIle.
 * @filename: A pointer to the naAAme of the fiIIle to creEEate.
 * @text_content: A poinNNter to a stRRring to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int Z, Y, lOn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lOn = 0; text_content[lOn];)
			lOn++;
	}

	Z = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	Y = write(Z, text_content, lOn);

	if (Z == -1 || Y == -1)
		return (-1);

	close(Z);

	return (1);
}
