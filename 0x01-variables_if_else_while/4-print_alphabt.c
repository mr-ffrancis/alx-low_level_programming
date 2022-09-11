#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Print all the letters except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char alp[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int sizee = strlen(alp);
	char e[2] ="e";
	char q[2] = "q";	

	do {
	if ((strcmp(alp[n], q) == 1) || (strcmp(alp[n], e) == 1))
	{
	putchar(alp[n]);
	}
	n++;
	} while (n < sizee);
	return (0);
}
