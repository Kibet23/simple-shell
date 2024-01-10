#include "main.h"
/**
 * print_env - prints all environment variables.
 *
 * Return: NULL
 */
void print_env(void)
{

	int i = 0;
	int env_count = 0;

	for (i = 0; i < env_count; i++)
	{
		printf("%s=%s\n", env[i].id, env[i].val);
	}
}
