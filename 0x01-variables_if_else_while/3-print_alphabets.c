#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Prints upper and lowere case of a string
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int k = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyz\n";
	int alp_len = strlen(alp);
	int alp_upp_lower = alp_len * 2;

	do {
	if ( n < 27 )
	{
	putchar(alp[n]);
	}
	else
	{
	putchar(toupper(alp[k]);
	k++;
	}
	n++;
	} while (n < alp_upp_lower);
	return (0);
}
