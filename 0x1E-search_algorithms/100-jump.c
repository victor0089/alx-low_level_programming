#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for avalue inan array
 * integers using the Jumpsearch algorithm
 * @array: inputarray
 * @size: size ofthe array
 * @value: value tosearch in
 * Return: index of thenumber
 */
int jump_search(int *array, size_t size, int value)
{
int index, m, k, prev;
if (array == NULL || size == 0)
return (-1);
m = (int)sqrt((double)size);
k = 0;
prev = index = 0;
do {
printf("Value checked array[%d] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
k++;
prev = index;
index = k * m;
} while (index < (int)size && array[index] < value);
printf("Value found between indexes [%d] and [%d]\n", prev, index);
for (; prev <= index && prev < (int)size; prev++)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
return (-1);
}
