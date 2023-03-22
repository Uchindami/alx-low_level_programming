#include "main.h"


	/**
	 * _islower - check if char is lowercase
	 * @c: is the char to be checked
	 *
	 * Description: This function checks if a given char is a lowercase letter.
	 * If it is, it returns 1. Otherwise, it returns 0.
	 *
	 * Return: 1 if char is lowercase, otherwise 0.
	 */


	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
