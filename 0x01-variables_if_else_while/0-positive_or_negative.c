#include <stdlib.h>
#include <time.h>
#include <stdlib.h> 
/**main function starts the code
*assigns a randon number to variable n
*check if the number is positive or negative and prints the result
*
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("is positive\n");
	else if (n=0)
		printf("is zero\n");
	else
		printf("is negative\n"); 	
	return (0);
}
