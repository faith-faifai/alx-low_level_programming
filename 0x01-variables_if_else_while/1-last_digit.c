#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - Determines greater than 5, 0 or less than 6 and not 0
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n,1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;
	if (n > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is%d and is 0\n", n, 1);
	}
	else 
		printf("Last digit of %d is %d is less than 6 and not 0", n, 1);
}
	return (0);
}
