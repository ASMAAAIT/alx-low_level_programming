#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterate through elements of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
