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
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int sizee = strlen(alp);

	do {
	if (!strcmp(alp[n], "q") || !strcmp(alp[n], "e"))
	{
	putchar(alp[n]);
	}
	n++
	} while (n < sizee);
	return (0);
}
