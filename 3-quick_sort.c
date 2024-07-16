#include "sort.h"

/**
*quick_sort - sort an array using quick sort algorithm
*@array: array to be sorted
*@size: size of the array
*/
void quick_sort(int *array, size_t size)
{

	if (array != NULL && size > 0)
		quick(array, size, 0, (int) size - 1);
}

/**
*quick - quicksort recursion
*@array: array
*@size: size
*@from: from
*@to: to
*/
void quick(int *array, size_t size, int from, int to)
{
	int m;

	if (from < to)
	{
		m = part_sort(array, size, from, to);
		quick(array, size, from, m - 1);
		quick(array, size, m + 1, to);
	}
}

/**
*part_sort - sortign a part of the array
*@size: size of the array
*@from: from where it starts
*@to: end
*
*Return: the indice where the swap happen or the end
*/
int part_sort(int *array, size_t size, int from, int to)
{
	int i, slow = from - 1, pivot = array[to], tmp;

	for (i = from; i < to; i++)
	{
		if (array[i] < pivot)
		{
			slow++;
			tmp = array[slow];
			array[slow] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
	slow++;
	tmp = array[slow];
	array[slow] = array[i];
	array[i] = tmp;
	print_array(array, size);
	return (slow);
}
