#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and displays the contents of a text file
 * @filename: The name of the file to read
 * @letters: The number of characters to read from the file
 *
 * Return: The number of characters read and displayed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';
	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	fclose(file);
	free(buffer);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesWritten);
}

