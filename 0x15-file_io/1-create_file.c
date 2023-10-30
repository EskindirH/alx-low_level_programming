#include "main.h"
/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: content to write to a file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nltrs, rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nltrs = 0; text_content[nltrs]; nltrs++)
		;

	rwr = write(fd, text_content, nltrs);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
