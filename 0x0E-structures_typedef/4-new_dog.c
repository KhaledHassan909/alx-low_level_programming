#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *newName, *newOwner;
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);
newName = malloc(strlen(name) + 1);
if (newName == NULL)
{
free(newDog);
return (NULL);
}
strcpy(newName, name);
newOwner = malloc(strlen(owner) + 1);
if (newOwner == NULL)
{
free(newName);
free(newDog);
return (NULL);
}
strcpy(newOwner, owner);
newDog->name = newName;
newDog->age = age;
newDog->owner = newOwner;
return (newDog);
}
