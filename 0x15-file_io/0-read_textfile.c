/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	int file;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open file */
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/* Reserving memory for letters in file */
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	/* Reading letters in file */
	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}

	/* Adding null-terminate for written string */
	buffer[bytes_read] = '\0';
	/* Writing string */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_read > bytes_written)
		return (0);

	/* Free buffer & close file */
	free(buffer);
	close(file);

	/* Return number of written bytes */
	return (bytes_written);
}
