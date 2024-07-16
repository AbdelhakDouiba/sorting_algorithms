#include "sort.h"

/**
*selection_sort - sort an array using selection sort algorithm
*@array: array to be sorted
*@size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	int i, j, min, tmp;

	for (i = 0; i < (int) size; i++)
	{
		min = i;
		for (j = i + 1; j < (int) size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}
