#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Print a - z in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 122; a < 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
