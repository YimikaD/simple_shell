#ifndef SHELL_H
#define SHELL_H

/*libaries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*main functions*/
int ss_shell(int ac, char **av, char **env);

#endif /*SHELL_H*/
