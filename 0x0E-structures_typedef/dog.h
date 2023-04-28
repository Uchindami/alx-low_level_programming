#ifndef DOG_H
#define DOG_H

/**
 * @struct dog
 * @brief A dog's basic info
 *
 * @var name The dog's name
 * @var age The dog's age
 * @var owner The dog's owner
 */
struct dog {
  char *name;
  float age;
  char *owner;
};

/**
 * @typedef dog_t
 * @brief A typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * @brief Initialize a dog
 *
 * @param d A pointer to the dog to initi-
 * @param name The dog's name
 * @param age The dog's age
 * @param owner The dog's owner
 */
void init_dog(dog_t *d, const char *name, float age, const char *owner);

/**
 * @brief Print a dog
 *
 * @param d A pointer to the dog to print
 */
void print_dog(const dog_t *d);

/**
 * @brief Create a new dog
 *
 * @param name The dog's name
 * @param age The dog's age
 * @param owner The dog's owner
 * @return A pointer to the newly created dog, or NULL on error
 */
dog_t *new_dog(const char *name, float age, const char *owner);

/**
 * @brief Free a dog
 *
 * @param d A pointer to the dog to free
 */
void free_dog(dog_t *d);

/**
 * @brief Copy a str
 *
 * @param dest The dest str
 * @param src The source str
 * @return A pointer to the dest str, or NULL on error
 */
char *_strcpy(char *dest, const char *src);

/**
 * @brief Get the length of a str
 *
 * @param s The str
 * @return The length of the str
 */
int _strlen(const char *s);

#endif
