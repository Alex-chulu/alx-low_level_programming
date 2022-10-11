#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: name to be used
 * @owner: owner to be used
 * @age: age to be used
 * Description: struct for dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
