#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 *
 * Description: Prints the members of a dog struct.
 */
void print_dog(const dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
