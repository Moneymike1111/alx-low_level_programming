#ifndef DOG_H
#define DOG_H
/*
 * struct dog: struct that stores some information of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
*/
/*
 *struct dog: a dog's basic info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
