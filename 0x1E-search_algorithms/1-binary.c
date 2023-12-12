#include "search_algos.h"
/**
 * recursive_search - searchesforavalue inan array
 * integers using the Binarysearchalgorithm
 * @array: inputarray
 * @size: size of thearray
 * @value: value tosearch in
 * Return: index ofthenumber
 */
int recursive_search(int *array, size_t size, int value)
{
size_t half = size / 2;
size_t i;
if (array == NULL || size == 0)
return (-1);
printf("Searching in array");
for (i = 0; i < size; i++)
printf("%s %d", (i == 0) ? ":" : ",", array[i]);
printf("\n");
if (half && size % 2 == 0)
half--;
if (value == array[half])
return ((int)half);
if (value < array[half])
return (recursive_search(array, half, value));
half++;
return (recursive_search(array + half, size - half, value) + half);
}
/**
 * binary_search - calls to binary_search toreturn
 * the indexof thenumber
 * @array: inputarray
 * @size: size ofthearray
 * @value: value tosearc
 * Return: indexof thenumber
 */
int binary_search(int *array, size_t size, int value)
{
int index;
index = recursive_search(array, size, value);
if (index >= 0 && array[index] != value)
return (-1);
return (index);
}
