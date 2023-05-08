nclude "main.h"
#include <stdlib.h>

/**
 * read_textfile - ReAds a tExt fIle and prInts it to POSIX stdout.
 * @filename: A poinTTer to the name of tHHhe file.
 * @letters: The numMMber of lettTTers the
 *       function read and print.
 *
 * Return: If the function fails or fileNNname is NULL - 0.
 *         O/w - the actual nuMber of byTes the funNNction can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t z, f, y;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	z = open(filename, O_RDONLY);
	f = read(o, buffer, letters);
	y = write(STDOUT_FILENO, buffer, r);

	if (z == -1 || f == -1 || y == -1 || y != f)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(z);

	return (y);
}
