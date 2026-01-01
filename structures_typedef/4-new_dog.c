#include "dog.h"
#include <string.h>

/**
 * new_dog - new instance of a dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name, *temp_owner;
	dog_t *new_puppy;

	temp_name = malloc(sizeof(name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(owner) * (strlen(owner) + 1));
	new_puppy = malloc(sizeof(dog_t));

	if (temp_name && temp_owner && new_puppy)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		new_puppy->name = temp_name;
		new_puppy->age = age;
		new_puppy->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_puppy);
		return (NULL);
	}
	return (new_puppy);
}
