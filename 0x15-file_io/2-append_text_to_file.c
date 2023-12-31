#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: text to append on a file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nltrs, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nltrs = 0; text_content[nltrs]; nltrs++)
			;
		rwr = write(fd, text_content, nltrs);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
