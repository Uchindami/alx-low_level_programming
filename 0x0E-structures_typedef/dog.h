#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(const dog_t *d);
dog_t *new_dog(const char *name, float age, const char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);

#endif
