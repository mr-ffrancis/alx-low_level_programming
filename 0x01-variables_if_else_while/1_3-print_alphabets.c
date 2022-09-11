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
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int alp_len = strlen(alp);
	int alp_upp_lower = alp_len * 2;
	char alp_all[52];

	do {
	if ( n < 27 )
	{
	alp_all[n] = alp[n];
	}
	else
	{
	alp_all[n] = toupper(alp[k]);
	k++;
	}
	n++;
	} while (n < alp_upp_lower);
	for (n = 0; n < alp_upp_lower; n++)
	{
		if ( n < 52 )
			putchar(alp_all[n]);
		else
		{
		putchar(alp_all[n] + "\n"); 
	}
	return (0);
}
