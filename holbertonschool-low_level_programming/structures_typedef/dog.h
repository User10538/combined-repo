#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type for dog details
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define dog_t as a new name for struct dog */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a variable of type struct dog
 *              with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the details of a dog, printing "(nil)"
 *              if any element (name, age, or owner) is NULL.
 */
void print_dog(struct dog *d); /**task 2*/


/**
 * new_dog - creates a new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
  * Description: This function creates a new dog by allocating memory for it
 *              and storing a copy of its name and owner. Returns a pointer
 *              to the newly created dog, or NULL if memory allocation fails.
 * Return: A pointer to the newly created dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner);


/**
 * free_dog - function that frees dogs
 *
 * @d: dog_t
 *
  * Description: This function fress dog
 */

void free_dog(dog_t *d);

#endif /* DOG_H */

