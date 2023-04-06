#include "main.h"
#include <stdio.h>

int actual_prime(int n, int k);

/**
 * is_prime_number -  returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n:being checked.
 *
 * Return:1 if interger is prime 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursively
 * @n:number to check
 * @k:iterator
 *
 * Return:1 if n is a prime, 0 if otherwise.
 */
int actual_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (actual_prime(n, k - 1));
}

