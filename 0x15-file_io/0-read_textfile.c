#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return:  actual number of letters it could read and printor 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	_read = read(fd, buf, letters);
	_write = write(STDOUT_FILENO, buf, _read);
	close(fd);
	free(buf);
	return (_write);
}
