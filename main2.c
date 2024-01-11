#include "main.h"
/**
 * main - checks the code
 * Return: NULL
 */
int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];
	char *toks[MAX_COMMAND_LENGTH];

	while (1)
	{
		if (strcmp(toks[0], "setenv") == 0)
		{
			if (toks[1] != NULL  && toks[2] != NULL)
			{
				int overwrite = 1;

				if (toks[3] != NULL && strcmp(toks[3], "0") == 0)
				{
					overwrite = 0;
				}
				setenv(toks[1], toks[2], overwrite);
			}
			else
			{
				fprintf(stderr, "setenv VARIABLE VALUE [0]\n");				}
		}
		else if (strcmp(toks[0], "unsetenv") == 0)
		{
			if (toks[1] != NULL)
			{
				unsetenv(toks[1]);
			}
			else
			{
				frintf(stderr, "unsetenv VARIABLE\n");
			}
		}
		else
		{
			exec_command(toks[0]);
		}
	}
	return (0);
}
