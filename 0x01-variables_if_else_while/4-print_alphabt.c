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
	char alp[] = "abcdefghijklmnopqrstuvwxyz\n";
	int sizee = strlen(alp);
	char e[] ="e";
	char q[] = "q";	
	char str_1[];

	do {
	str_1 = alp[n];
	if ((strcmp(str_1, q) == 1) || (strcmp(str_1, e) == 1))
	{
	putchar(alp[n]);
	}
	n++;
	} while (n < sizee);
	return (0);
}
