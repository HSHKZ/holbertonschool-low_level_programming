#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - begining
 *
 * Description: print if negative or positive
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: 0 ends the program
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, cpname, cpowner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (cpname = 0 ; name[cpname] != '\0' ; cpname++)
	;
	cpname++;
	dog->name = malloc(sizeof(char) * cpname);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0 ; i < cpname ; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (cpowner = 0 ; owner[cpowner] != '\0' ; cpowner++)
	;
	cpowner++;
	dog->owner = malloc(sizeof(char) * cpowner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0 ; i < cpowner ; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
