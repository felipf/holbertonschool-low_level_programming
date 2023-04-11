#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - func that reads a text file and prints it to the POSIX std output.
 * @filename: name
 * @letters: num of letters to print
 * Return: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		return (0);
	}

	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[read_count] = '\0';

	if (write(STDOUT_FILENO, buffer, read_count) != read_count)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);

	return (read_count);

}
