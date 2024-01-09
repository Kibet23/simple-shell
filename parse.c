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
