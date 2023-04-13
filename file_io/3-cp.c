#include "main.h"
/**
 * main - main point
 * @argc: count
 * @argv: info
 * Return: 97, 98 and 99
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	cp_content(argv[1], argv[2]);
	exit(0);
}
/**
 * cp_content - copy content
 * @file_one: from
 * @file_two: to
 */
void cp_content(const char *file_one, const char *file_two)
{
	int file_from, file_to, nread = 5555, nwrite;
	char *cCount[5555];
	mode_t modsie = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	file_from = open(file_one, O_RDONLY);

	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_one), exit(98);

	file_to = open(file_two, O_CREAT | O_TRUNC | O_WRONLY, modsie);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two), exit(99);

	nread = read(file_from, cCount, 5555);
	if (nread == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_one), exit(98);

	nwrite = write(file_to, cCount, nread);
	if (nwrite == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two), exit(99);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
}
