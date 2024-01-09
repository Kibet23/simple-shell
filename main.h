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

void display_prompt(void);
int exec_command(const char *cmd);
char *get_line(void);
void parse_command(char *load, char *toks[]);

#endif
