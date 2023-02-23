#include "main.h"

/**
 * largest_number - returns the largest number of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Thirf integer
 * Return: Largest number
 */
int Largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > c && b > a)
	{
	largest = b;
	}
	else if (c > b)
	{
	largest = c;
	}
	else
	{
	largest = b;
	}
	return (largest);
}
