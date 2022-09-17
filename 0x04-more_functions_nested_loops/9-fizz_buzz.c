#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return fizz buzz
 */
int main(void)
{
	int i = 1;

	do {
		if ( i % 5 == 0 || i % 3 == 0)
			if (i % 5 == 0 && i % 3 == 0)
				printf("FizzBuzz ");
			else if (i % 5 == 0 || i % 3 != 0)
				printf("Buzz ");
			else
				printf("Fizz ");
		else
			printf("%d ", i);
		i++;
	} while (i <= 100);
}
