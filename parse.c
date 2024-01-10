#include "main.h"
/**
 * parse_command - custom function to tokenize commands
 * @load: input parameter
 * @toks: array to the tokens to be inputed into
 *
 * Return: 0
 */
void parse_command(char *load, char *toks[])
{
	char *tok;
	const char delim[] = " \t\n";
	int count = 0;

	tok = strtok(load, delim);

	while (tok != NULL && count < MAX_COMMAND_LENGTH - 1)
	{
		toks[count++] = tok;
		tok =  strtok(NULL, delim);
	}
	toks[count] = NULL;
}
/**
 * find_command - checks whether the command is in PATH
 * @cmd: command to be checked
 *
 * Return: 0
 */
int find_command(char *cmd)
{
	char *path = getenv("PATH");
	char cpy[MAX_COMMAND_LENGTH];

	strncpy(cpy, path, sizeof(cpy));
	cpy[sizeof(cpy) - 1] = '\0';

	char *tok = strtok(cpy, ":");

	while (tok != NULL)
	{
		char k[MAX_COMMAND_LENGTH];

		snprintf(k, sizeof(k), "%s%s", tok, cmd);

		if (access(k, X_OK) == 0)
		{
			return (1);
		}

		tok = strtok(NULL, ":");
	}
	return (0);
}
