#include <unistd.h>
/**
 * main - Entry point
 *
 * output using write function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(3, str1, 100);
	return (1);
}
