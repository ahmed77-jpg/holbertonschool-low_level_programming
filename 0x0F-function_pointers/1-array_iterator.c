#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Execute functions on elements of an array
 * @array: The array
 * @size: Size of array
 * @action: Pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int num = 0;
if (array == NULL || action == NULL)
return;
for (num = 0; num < size; num++)
action(array[num]);
}
