#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * assigns a randon number to variable n
 * checks if the number is positive or negative and prints the result
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("The Last digit of %d is greater than 5\n", l);
	else if (l != 0 &&  l < 6)
		printf("The Last digit of %d less than 6 and not 0\n", l);
	else
		printf("%d is zero\n", l);
	return (0);
}
