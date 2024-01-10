#include "main.h"
/**
 * env_builtin - implememnts the env builtin command
 *
 * Return: 0
 */
void env_builtin(void)
{
	print_env();
}
/**
 * exit_builtin - handles the exit built-in command
 * @status: integer used to exit shell
 *
 * Return: 0
 */
int exit_builtin(int *status)
{
	if (status != NULL)
	{
		int i = atoi(status);

		exit(i);
	}
	else
	{
		exit(0);
	}
}
/**
 * setenv - handles the setenv builtin commands
 * @id: variable name to be added to the envirnoment
 * @val: value to be added to be added to the envirnment
 * @overwrite: determines what the value changes to
 *
 * Return: 0 and -1
 */
int setenv(const char *id, const char *val, int overwrite)
{
	int env_count = 0;
	int j = 0;

	for (j = 0; j < env_count; j++)
	{
		if (strcmp(environ[j].id, id) == 0)
		{
			if (overwrite)
			{
				strncpy(environ[j].val, val, sizeof(environ
							[env_count].val) - 1);
				environ[j].val[sizeof(environ[j].val) - 1] = '\0';
				return (0); /*success*/
			}
			else
			{
				fprintf(stderr, "variable '%s' already exists modify
						setenv using overwrite = 1.\n", name);
				return (-1); /*failure*/
			}
		}
	}
	if (env_count < MAX_ENV_VARIABLES - 1)
	{
		strncpy(environ[env_count].id, id, sizeof(environ[env_count].id)
				- 1);
		environ[env_count].id[sizeof(environ[env_count].id) - 1] = '\0';
		strncpy(environ[env_count].val, val, sizeof(environ[env_count].val)
				- 1);
		environ[env_count].val[sizeof(environ[env_count].val) - 1] = '\0';

		env_count++;
		return (0); /*success*/
	}
	else
	{
		fprintf(stderr, "max number of variables reached.\n");
		return (-1);
	}
}
