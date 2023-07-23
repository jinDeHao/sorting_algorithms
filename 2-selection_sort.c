#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: the list to sort
 * @size: the size of list
*/

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, check;
	int swap;

	while (i < size)
	{
		j = i + 1;
		check = i;
		while (j < size)
		{
			if (array[check] > array[j])
				check = j;
			j++;
		}
		swap = array[i];
		array[i] = array[check];
		array[check] = swap;
		if (array[i] != array[check])
			print_array(array, size);
		i++;
	}
}
