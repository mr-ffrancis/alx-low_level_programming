#include <stdio.h>
#include <string.h>

/**
 *main - Entry point
 *Fizz Buzz Test
 * Return: 0 on sucess
 */
int main(void)
{
	int i = 1;

	do {
		if (i == 1)
		{
			printf("%d ", i);
		}
		if (i % 5 == 0 || i % 3 == 0)
		{
			if (i % 5 == 0 && i % 3 == 0)
			{
				printf(" FizzBuzz");
			}
			else if (i % 5 == 0 || i % 3 != 0)
			{
				printf(" Buzz");
			}
			else
			{
				printf(" Fizz");
			}
		}
		else
		{
			printf(" %d", i);
		}
		i++;
	} while (i <= 100);
	printf("\n");
	return (0);
}
