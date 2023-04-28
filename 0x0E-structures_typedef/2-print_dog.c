#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * @brief Print a dog
 *
 * @param d A pointer to the dog to print
 */
void print_dog(const dog_t *d) {
  if (d == NULL) {
    return;
  }
  if (d->name == NULL) {
    d->name = "(nil)";
  }
  if (d->owner == NULL) {
    d->owner = "(nil)";
  }
  printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
