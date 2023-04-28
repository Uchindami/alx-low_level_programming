#include <stdlib.h>
#include "dog.h"

/**
 * @brief Get the length of a str
 *
 * @param s The str
 * @return The length of the str
 */
int _strlen(const char *s) {
  int i;

  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

/**
 * @brief Copies the str pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @param dest The dest buffer
 * @param src The source str
 * @return The pointer to dest
 */
char *_strcpy(char *dest, const char *src) {
  int len = _strlen(src);

  for (int i = 0; i < len; i++) {
    dest[i] = src[i];
  }
  dest[len] = '\0';

  return dest;
}

/**
 * @brief Creates a new dog
 *
 * @param name The name of the dog
 * @param age The age of the dog
 * @param owner The owner of the dog
 * @return A pointer to the new dog, or NULL on error
 */
dog_t *new_dog(const char *name, float age, const char *owner) {
  dog_t *dog = malloc(sizeof(dog_t));
  if (dog == NULL) {
    return NULL;
  }

  int len1 = _strlen(name);
  int len2 = _strlen(owner);

  dog->name = malloc(sizeof(char) * (len1 + 1));
  if (dog->name == NULL) {
    free(dog);
    return NULL;
  }

  dog->owner = malloc(sizeof(char) * (len2 + 1));
  if (dog->owner == NULL) {
    free(dog->name);
    free(dog);
    return NULL;
  }

  _strcpy(dog->name, name);
  _strcpy(dog->owner, owner);
  dog->age = age;

  return dog;
}
