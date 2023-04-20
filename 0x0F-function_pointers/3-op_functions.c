#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two int
 *
 * @a: First int
 * @b: Second int
 *
 * Return: Result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two int
 *
 * @a: First int
 * @b: Second int
 *
 * Return: Result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two int
 *
 * @a: First int
 * @b: Second int
 *
 * Return: Result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two int
 *
 * @a: Numerator
 * @b: Denominator
 *
 * Return: Result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Computes the remainder of division between two int
 *
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of the modulo operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
