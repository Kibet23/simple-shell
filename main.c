#include "main.h"
/**
 * main - checks the code
 *
 * Return: 0
 */
int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];

	while (1)
	{
		display_prompt();
		/*read command from user*/
		if (fgets(cmd, sizeof(cmd), stdin) == NULL)
		{
			printf("\nexit shell");
			break;
		}
		/*Remove newline char from the command*/
		cmd[strcpn(cmd, "\n")] = '\0';

		/*Execute command*/
		exec_command(cmd);
	}

	return (0);
}
/**
 * main - checks the code
 *
 * Return: 0
 */
int main(void)
{
	while (1)
	{
		char *load = get_line();

		if (load == NULL)
		{
			printf("\nExiting shell\n");
			break;
		}
		char *tok = strtok(load, " \t\n");

		if (tok == NULL)
		{
			free(load);
			continue;
		}
		char *cmd = tok;
		char *arguments[MAX_ARGS];
		size_t count;

		while ((tok = strtok(NULL, " \t\n")) != NULL && count < MAX_ARGS - 1)
		{
			arguments[count++] = tok;
		}
		arguments[count] = NULL;

		exec_command(cmd, arguments);
		/*free allocated memory*/
		free(load);
	}
	return (0);
}
/**
 * main - checks the code
 *
 * Return: 0
 */
int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];
	char *toks[MAX_COMMAND_LENGTH];

	while (1)
	{
		display_prompt();

		if (fgest(cmd, sizeof(cmd), stid) == NULL)
		{
			printf("\nexit shell\n");
			break;
		}
		cmd[strcspn(cmd, "\n")] = '\0';

		parse_command(cmd, toks);
		/*execute the command*/
		if (toks[0] != NULL && find_command(toks[0]))
		{
			exec_command(toks[0]);
		}
		else if (toks[0] != NULL)
		{
			fprintf(stderr, "cmd not found: %s\n", tokens[0]);
		}
	}
	return (0);
}
/**
 * main - checks the code
 *
 * Return: NULL
 */
int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];
	char *toks[MAX_COMMAND_LENGTH];

	while (1)
	{
		display_prompt();

		if (fgets(cmd, sizeof(cmd), stdin) == NULL)
		{
			printf("\nExit shell\n");
			break;
		}
		cmd[strcspn(cmd, "\n")] = '\0';

		parse_command(cmd, toks);

		if (toks[0] != NULL)
		{
			if (strcmp(toks[0], "env") == 0)
			{
				env_builtin();
			}
			else
			{
				exec_command(toks[0]);
			}
		}
	}
	return (0);
}
/**
 * main - checks the code
 *
 * Return: NULL
 */
int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];
	char *toks[MAX_COMMAND_LENGTH];

	while (1)
	{
		display_prompt();

		if (fgets(cmd, sizeof(cmd), stdin) == NULL)
		{
			printf("\nExit shell\n");
			break;
		}

		cmd[strcspn(cmd, "\n")] = '\0';

		parse_command(cmd, toks);
		/*exec cmd or built-in*/

		if (toks[0] != NULL)
		{
			if (strcmp(toks[0], "env") == 0)
			{
				env_builtin();
			}
			else if (strcmp(toks[0], "exit") == 0)
			{
				exit_builtin(toks[1]);
			}
			else
			{
				exec_command(toks[0]);
			}
		}
	}
	return (0);
}
