#include "search_algos.h"
/**
 * linear_search - searchesforavalue in anarray
 * integers using the Linear searchalgorithm
 * @array: inputarray
 * @size: size of thearray
 * @value: value tosearch in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
return (-1);
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
