#include "main.h"
/**
 *main - Entry Point
 *Print Alphabet
 *Return: 0 on sucess
 *
 */


void print_alphabet(void)
{
	int a = 97;

	do{
		_putchar(a);
		a++;
	} while (a < 123);
	_putchar('\n');
}
