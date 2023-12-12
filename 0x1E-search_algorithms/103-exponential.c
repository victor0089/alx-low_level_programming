#include "search_algos.h"
/**
  * _binary_search - Searches fora valuein aortedarray
  *                  of integers usingbinary search.
  * @array: A pointerto thefirst elementof the arrayto search.
  * @left: The startingindex ofthe [sub]array tosearch.
  * @right: The ending indexof the[sub]arraytosearch.
  * @value: The value tosearch f
  * Return: If the valueis notpresent orthe array isNULL, -1.
  *         Otherwise, theindex where thevalue islocated.
  * Description: Printsthe [sub]arraybeing searchedafter eachchange.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
/**
  * exponential_search - Searchesfor avalue in asorted array
  *	of integers using exponentialsearch.
  * @array: A pointer to thefirst element of the array to search.
  * @size: The number of elements inthe array.
  * @value: The value to search f.
  * Return: If the value is notpresent or the array is NULL, -1.
  *         Otherwise, the indexwhere thevalue is located.
  * Description: Prints avalue every time it iscompared inthe array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;
	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
