#include "sshell.h"

/**
 * main - Entry point of program
 * @ac: Argument count
 * @av: Argument vector
 * @env: Environment
 * Return: On successs 0
 */

int main(int ac, char **av, char **env)
{
        int start;

        start = ss_shell(ac, av, env);

        return (start);
}
