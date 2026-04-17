#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog_t, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int i, lenName = 0, lenOwner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);


	while (name[lenName])
		lenName++;

	while (owner[lenOwner])
		lenOwner++;


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(lenName + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}


	dog->owner = malloc(lenOwner + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);

		return (NULL);
	}

	for (i = 0; i <= lenName; i++)
	       dog->name[i] = name[i];

       for (i = 0; i <= lenOwner; i++)
	       dog->owner[i] = owner[i];

       dog->age = age;

       return (dog);
}
