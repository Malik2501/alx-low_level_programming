#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a struct that creates dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: my  first struct
 */

/**
 * dog_t - new nane for struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
