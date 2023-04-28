#include <stdlib.h>
#include "dog.h"

/**
 * @brief Frees memory allocated for a dog
 *
 * @param d A pointer to the dog to free
 */
void free_dog(dog_t *d) {
  if (d != NULL) {
    free(d->name);
    free(d->owner);
    free(d);
  }
}
