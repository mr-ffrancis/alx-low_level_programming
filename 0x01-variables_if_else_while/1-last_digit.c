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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("The Last digit of %d is greater than 5\n", n);
	else if (n != 0 &&  n < 6)
		printf("The Last digit of %d less than 6 and not 0\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
