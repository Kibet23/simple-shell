#SIMPLE SHELL
This is the simple shell project where one is expected to create his or her own simple shell.Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Who designed and implemented the original Unix operating system
Who wrote the first version of the UNIX shell
Who invented the B programming language (the direct predecessor to the C programming language)
Who is Ken Thompson
How does a shell work
What is a pid and a ppid
How to manipulate the environment of the current process
What is the difference between a function and a system call
How to create processes
What are the three prototypes of main
How does the shell use the PATH to find the programs
How to execute another program with the execve system call
How to suspend the execution of a process until one of its children terminates
What is EOF / “end-of-file”?
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
Write a README with the description of your project
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker



#TASKS
#Task 0: Betty would be proud:
This will check on whether the files created in this project fulfil the BETTY style requirements.

#Task 1: Simple shell 0.1
This is supoosed to create a function that displays a prompt and wait for the user to type a command.
You should handle 'EOF' and print an error if an executable cannot be found.

#Task 2: Simple shell 0.2
Simple shell 0.1 + handle command lines with arguments.

#Task 3: Simple shell 0.3
Simple shell 0.2 + a function that handle the PATH. fork must not be called if the command does not exist.

#Task 4: Simple shell 0.4
Simple shell 0.3 + a function that implement the exit buil-in, that exits the shell. Should not handle any argument to the built-in exit.

#Task 5: Simple shell 1.0
Simple shell 0.4 + a function that implement the env built-in, that prints the current environment.

#Task 6: Simple shell 0.1.1
Simple shell 0.1 + create a function that
-involves your own getline function
-use buffer to read chars
-use static variables
-you are not supposed to use getline.

#Task 7: Simple shell 0.2.1
Simple shell 0.2 +
-you not allowed to use strtok.

#Task 8: Simple shell 0.4.1
Simple shell 0.4 + create a function that
-handles arguments for the built-in exit,
-use: exit status, where status is an int used to exit the shell.

#Task 9: setenv, unsetenv
Simple shell 1.0 + create a function that:

-Implement the setenv and unsetenv builtin commands

setenv
-Initialize a new environment variable, or modify an existing one
-Command syntax: setenv VARIABLE VALUE
-Should print something on stderr on failure
unsetenv
-Remove an environment variable
-Command syntax: unsetenv VARIABLE
-Should print something on stderr on failure

#Task 10: cd
Simple shell 1.0 + create a function that implement the builtin command cd:
- changes the current directory of the process.
- if no argument is given to cd tha command must be interpreted as cd $HOME
- handle the command cd -
- update the environment variable PWD when you change the directory.

#Task 11: ;
Simple shell 1.0 + create a function that handles the commands separator ;

#Task 12: && and ||
Simple shell 1.0 + create a function that handles the logical operators && and ||

#Task 13: alias
Simple shell 1.0 + create a function that:
- implement tha alias builtin command.
-alias[name[='value'] ...] where:
				- alias: prints a list of all aliases, one per line.
				- alias name[name2 ...]: printts all aliases name 1 per line.
				- alias name = 'value' [...]: defines an alias for each name					whose value is given.

#Task 14: Variables
Simple shell 1.0+ create a function that handles:
-variables replacement
-$? variable
-$$ variable

#Task 15: Comments
Simple shell 1.0 +
-handle comments(#)

#Task 16: File as input
Simple shell 1.0 + write a function that:

-Usage: simple_shell [filename]
-Your shell can take a file as a command line argument
-The file contains all the commands that your shell should run before exiting
-The file should contain one command per line
-In this mode, the shell should not print a prompt and should not read from stdin

		#ALL THE BEST KIBET!!!
