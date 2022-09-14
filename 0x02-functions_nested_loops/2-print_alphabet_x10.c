#include "main.h"
/**
 *print_alphabet - Entry Point
 *Print Alphabet
 *Return: 0 on sucess
 *
 */


void print_alphabet_x10(void)
{
	int a = 97;
	int b = 1;

	do{
		while (a < 123)
		{
		_putchar(a);
		a++;
		}
		_putchar('\n');
		b++;
	} while (b < 11)
}
