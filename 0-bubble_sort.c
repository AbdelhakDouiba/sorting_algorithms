#include "sort.h"

/**
*bubble_sort - sort an array using buble sort algorithm
*@array: array to be sorted
*@size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int i, tmp, flag = 0;

	while (!(flag))
	{
		flag = 1;
		for (i = 0; i < (int) size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 0;
				print_array(array, size);
			}
		}
	}
}
