#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a para
 * @array: the array
 * @size: the size of array
 * @action: function
 * Return : no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
