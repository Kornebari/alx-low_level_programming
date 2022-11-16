#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ni, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(ni * sizeof(char));
		if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ni; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
