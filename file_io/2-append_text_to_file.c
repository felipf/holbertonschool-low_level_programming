#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name
 * @text_content: content
 * Return: 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nbytes, result;

	if (filename == NULL)
	return -1;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	nbytes = 0;
	while (text_content[nbytes] != '\0')
		nbytes++;

	result = write(fd, text_content, nbytes);
	close(fd);

	if (result == -1)
		return (-1);
	else
		return (1);
}
