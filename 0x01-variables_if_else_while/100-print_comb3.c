#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * assigns a randon number to variable n
 * checks if the number is positive or negative and prints the result
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b<58;b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);

				if (a == 56 && b == 57)
				{
				break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
