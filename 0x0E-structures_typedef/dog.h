#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: name to be used
 * @owner: owner to be used
 * @age: age to be used
 */

struct dog
{
	char *name;
	char *owner;
	float age;
}

typedef struct dog dog_x;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_x *new_dog(char *name, float age, char *owner);
void free_dog(dog_x *d);

#endif /*DOG_H*/
