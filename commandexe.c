#include "main.h"
/**
 * exec_command - executes the command assigned to the prompt
 * @cmd: the command to be executed
 * @arguments: handles the arguments in the command line
 *
 * Return: -1 and 0
 */
int exec_command(char *cmd, char **args)
{
	pid_t processid;
	int status;

	processid = fork();

	if (processid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
		return (-1);
	}
	else if (processid == 0)
	{
		if (execvp(cmd, args) == -1)
		{
			perror("execlp");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(processid, &status, 0);
	}
	return (0);
}
