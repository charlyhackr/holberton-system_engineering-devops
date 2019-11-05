#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * ciclo_infinito - RUn an infinte white loop
 * Return: ALways 0
 */
int ciclo_infinito(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates five zombie process.
 * Return: ALways 0.
 */
int main(void)
{
	pid_t pid;
	char conta = 0;

	while (conta < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			conta++;
		}
		else
			exit(0);
	}

	ciclo_infinito();

	return (EXIT_SUCCESS);
}
