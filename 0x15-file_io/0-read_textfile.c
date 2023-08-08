#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STOUT.
 * @filename: A pointer to the name of the file.
 * @letters: number of letters the
 * 	     function should read and print.
 * Returns: if the function fails or file name is NULL -0.
 * 	    o/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *read_str;
	ssize_t open_ret_val;
	ssize_t write_ret_val;

	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);

	open_ret_val = open(filename, O_RDONLY);
	if (open_ret_val == -1)
		return (0);

	read_str = malloc(letters);
	read_ret_val = read(open_ret_val, read_str, letters);
	if (read_ret_val == -1)
	{
		free(read_str);
		close(open_ret_val);
		return (0);
	}

	write_ret_val = write(STDOUT_FILENO, read_str, read_ret_val);
	if (write_ret_val == -1)
	{
		free(read_str);
		close(open_ret_val);
		return (0);
	}
	if (write_ret_val != read_ret_val)
	{
		free(read_str);
		close(open_ret_val);
		return (0);
	}

	free(read_str);
	close(open_ret_val);

	return (write_ret_val);
}
