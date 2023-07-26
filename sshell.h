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
char *g_input(char **av);
char **total_tokenize(char *src, char **av);
int total_tokens(char *src);
void _executeshell(char **t, char **av, char **env);
int _thepath(char **t, char **env);
char *get_env(char **env, char *data);
void print_environ(char **env);
void free_up(char **up);
int check_exit(char **t, char **env);
void shell_exit(char **t);

/*utili functions*/
int _strlen(char *s);
int _strcpy(char *str2, char *str1);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2, size_t len);
char *_strcat(char *str1, const char *str2);
void _write(int status, char **av, char *text);
void _writeerror(int status, char **av, char *c);

#endif /*SHELL_H*/
