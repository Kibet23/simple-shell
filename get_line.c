#include "main.h"
/**
 * get_line - custom getline function
 *
 * Return: 0
 */
char *get_line(void)
{
	static char buffer[BUFFER_SIZE];
	static size_t index;
	static ssize_t bytes;

	if (index >= bytes || index == 0)
	{
		bytes = read(STDIN_FILENO, buffer, BUFFER_SIZE);
		if (bytes == 0)
		{
			/*end of file reached*/
			return (NULL);
		}
		else if (bytes < 0)
		{
			perror("read");
			exit(EXIT_FAILURE);
		}
		index = 0;
	}
	size_t len = 0;

	while (index + len < bytes && buffer[index + len] != '\n')
	{
		len++;
	}
	char *getline = malloc(len + 1);

	if (getline == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	for (size_t j = 0; j < len; j++)
	{
		getline[j] = buffer[index + j];
	}
	getline[len] = '\0';
	index += len + 1;

	return (getline);
}
