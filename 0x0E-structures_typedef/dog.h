#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributions
 * @name: The nae of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: The attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typdef for doy structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *dog);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
