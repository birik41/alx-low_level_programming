#include <stdio.h>
#include <stdib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - TAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n<0)
	{
		printf("%d is negative\n", n);
	}
	else(n == 0)
	{
		printf("%d is zero\n")
	}
	return (0);
}
