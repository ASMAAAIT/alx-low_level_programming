#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size 'size' and initialize with 'c'
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array, NULL if failed
 */
char *create_array(unsigned int size, char c)
{
 char *str;
 unsigned int i;
 str = malloc(sizeof(char) * size);
 if (size == 0 || str == NULL)
 return (NULL);

 for (i = 0; i < size; i++)
            str[i] = c;
 return (str);
}
