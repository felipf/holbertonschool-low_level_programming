#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that creates a file.
 * @filename: name.
 * @text_content: content.
 * Return: 1 success.
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;

		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
