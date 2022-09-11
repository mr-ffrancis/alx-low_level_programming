#include <stdio.h>
/**
 * main - Entry point
 *
 * output using write function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char str1[] = "and that pice of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str1, 59);
	return (1);
}
