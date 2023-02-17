#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: returns the last digit of integer n
 * and whether it 0, greater than 5, or less than 6
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*Last digit of 629438752 is 2 and is less than 6 and not 0*/
	int last_digit;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if (last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, last_digit);
	}
	return (0);
}
