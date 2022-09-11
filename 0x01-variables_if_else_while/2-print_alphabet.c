#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * assigns a randon number to variable n
 * checks if the number is positive or negative and prints the result
 * Return: Always 0 (Success)
 */
int main(void)
{	int n = 1; 
	char alp[] =  "abcdefghijklmnopqrstuvwxyz";

	do
	{

	putchar(alp[n]);
	n++;		
			
	} while(n < strlen(alp)); 
	return (0);
}
