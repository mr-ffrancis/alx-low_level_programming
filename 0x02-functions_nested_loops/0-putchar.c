#include "main.h"
/**
 *main - Entry of the Program
 *Functions
 *Returns - 0 on sucess
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
