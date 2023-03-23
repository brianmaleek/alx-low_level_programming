#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add integers
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract integers
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply integers
 * @a: integer
 * @b: integer
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: integer
 * @b: integer
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers.
 * @a: integer
 * @b: integer
 * Return: modulus of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
