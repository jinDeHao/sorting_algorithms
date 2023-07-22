#include "sort.h"

/**
 * bubble_sort - that sort a list
 * @array: the list to sort
 * @size: the size of the list
*/
void bubble_sort(int *array, size_t size)
{
	int j = 0, swap;

	while (size > 0)
	{
		j = 0;
		while (j + 1 < size)
		{
			if (list[j] > list[j + 1])
			{
				swap = list[j];
				list[j] = list[j + 1];
				list[j + 1] = swap;
			}
			j++;
		}
		size--;
	}
}
