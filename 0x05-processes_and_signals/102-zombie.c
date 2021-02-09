#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * infinite_while - an infinite while loop
 *
 * Return: Always zero
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - creates 5 zombie processes, prints pid, then loops infinitely
 *
 * Return: nothing
 */
int main(void)
{
	pid_t pid;
	int i = 0;

	while (i < 5)
	{
		pid = fork();
		if (pid)
			printf("Zombie process created, PID: %i\n", pid);
		else
			exit(0);
		i++;
	}
	return (infinite_while());
}
