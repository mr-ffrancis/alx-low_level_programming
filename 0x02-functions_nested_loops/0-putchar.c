#include "main.h"
/**
 *main - Entry of the Program
 *Functions
 *
 */

int main(void)
{
	char answer[] = "_putchar";
	int a = 0;
	int b;

	b = strlen(answer);
	do
	{
		putchar(answer[a]);
		a++;

	}while (a<=b);
	putchar('\n');
	return 0;
}
