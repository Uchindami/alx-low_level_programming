#include <stdlib.h>
#include "dog.h"

/**
 * @brief Initialize a dog
 *
 * @param d A pointer to the dog to initi-
 * @param name The dog's name
 * @param age The dog's age
 * @param owner The dog's owner
 */
void init_dog(dog_t *d, const char *name, float age, const char *owner) {
  if (d == NULL) {
    d = malloc(sizeof(dog_t));
    if (d == NULL) {
      return;
    }
  }
  d->name = name;
  d->age = age;
  d->owner = owner;
}
