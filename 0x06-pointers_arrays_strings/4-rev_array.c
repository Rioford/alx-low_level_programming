#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int z, b;

	n = n - 1;
	b = 0;
	while (b <= n)
	{
		z = a[b];
		a[b++] = a[n];
		a[n--] = z;
	}

}
