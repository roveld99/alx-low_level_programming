#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints the last digit of the number stored in the variable n.
 *
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10
if (lastdigit > 5)
	      printf("lastdigit of:%d is:%d and is greater than 5\n", n, lastdigit);
else if (lastdigit == 0)
	    printf("lastdigit of:%d is:%d and is 0\n", n, lastdigit);
else
	    printf("lastdigit of:%d is:%d and is less than 6 and not 0\n",
		   n, lastdigit);
	return (0);
}
