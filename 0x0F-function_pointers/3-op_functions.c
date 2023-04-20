#include "3-calc.h"
#include <stdio.h>

/**
 * op_add -  returns the sum of a and b
 * @a:interger 1
 * @b:interger 2
 *
 * Return:sum
 */
int op_add(int a, int b)
{
	return ((a + b));
}

/**
 * op_sub - returns the difference of a and b.
 * @a:first 1
 * @b:second 2
 *
 * Return:difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a:interger 1
 * @b:interger 2
 *
 * Return:multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a:first interger
 * @b:second interger
 *
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 * @a:first interger
 * @b:second interger
 *
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
