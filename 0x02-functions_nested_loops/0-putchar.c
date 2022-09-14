#include "main.h"
/**
 *main - Entry Point
 *Functions
 *Return: 0 on sucess
 */

int main(void)
{
	char answer[] = "_putchar\n";
	int a = 0;
	int b;

	b = strlen(answer);
	do {
		_putchar(answer[a]);
		a++;

	} while (a < b);
	return (0);
}
