#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits with the given code
 * @code: The exit code
 * @message: The error message to print
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another file
 * @file_from: The source file name
 * @file_to: The destination file name
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_result, write_result;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
			error_exit(99, "Error: Can't write to file");
	}

	if (read_result == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success, or the corresponding exit code on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return 97;
	}

	copy_file(argv[1], argv[2]);

	return 0;
}

