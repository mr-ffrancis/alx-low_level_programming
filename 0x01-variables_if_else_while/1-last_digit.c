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
		printf("The Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l != 0 &&  l < 6)
		printf("The Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	else
		printf("The Last digit of %d is %d and is zero\n", n, l);
	return (0);
}
