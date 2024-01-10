#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <limits.h>
#include <sys/types.h>
#include <stdlib.h>

#define MAX_COMMAND_LENGTH 100
#define BUFFER_SIZE 1024
#define MAX_ENV_VARIABLES 50

/**
 * struct -  data structure
 * @id: char name
 * @val: value 
 */
typedef struct{
	char id[MAX_COMMAND_LENGTH];
	char val[MAX_COMMAND_LENGTH]
}env;

env environ[MAX_ENV_VARIABLES];

void display_prompt(void);
int exec_command(const char *cmd);
char *get_line(void);
void parse_command(char *load, char *toks[]);
/*env builtin*/
void env_builtin(void);
void print_env(void);
/*exit builtin*/
int exit_builtin(int *status);

#endif
