/**
 * struct op - Struct representing an operator and its corresponding function pointer
 *
 * @op: Operator string
 * @f: Function pointer
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - Computes the sum of two int's
 *
 * @a: First operand
 * @b: Second operand
 *
 * Return: Result of the addition operation
 */
int op_add(int a, int b);

/**
 * op_sub - Computes the difference between two int's
 *
 * @a: First operand
 * @b: Second operand
 *
 * Return: Result of the subtraction operation
 */
int op_sub(int a, int b);

/**
 * op_mul - Computes the product of two int's
 *
 * @a: First operand
 * @b: Second operand
 *
 * Return: Result of the multiplication operation
 */
int op_mul(int a, int b);

/**
 * op_div - Computes the quotient of division between two int's
 *
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of the division operation
 */
int op_div(int a, int b);

/**
 * op_mod - Computes the remainder of division between two int's
 *
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of the modulo operation
 */
int op_mod(int a, int b);

/**
 * get_op_func - Retrieves a function pointer for the given operator string
 *
 * @s: Operator string
 *
 * Return: Function pointer corresponding to the operator, or NULL if not found
 */
int (*get_op_func(char *s))(int, int);
