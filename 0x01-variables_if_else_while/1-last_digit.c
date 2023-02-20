#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("The last digit of %d is %d and it is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("The last digit of %d is %d and it is 0\n", n, ld);
	else if (ld < 6)
		printf("The last digit of %d is %d and it is less than 6 and not 0\n", n, ld);

	return (0);
}
