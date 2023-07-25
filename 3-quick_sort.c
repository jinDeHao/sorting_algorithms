#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @array: list to sort
 * @size: the size of the list
*/
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		myQuickSort(array, size, 0, size - 1);
}

/**
 * myQuickSort - sorts sublists
 * @array: list to sort
 * @size: the size of the list
 * @start: the start of sublist
 * @end: the end of the sub list
*/
void myQuickSort(int *array, size_t size, size_t start, size_t end)
{
	size_t checkerIdx;

	if (start < end)
	{
		checkerIdx = quickCheck(array, size, start, end);
		if (checkerIdx > 1)
			myQuickSort(array, size, start, checkerIdx - 1);
		if (end > 1)
			myQuickSort(array, size, checkerIdx + 1, end);
	}
}

/**
 * quickCheck - check the sublist
 * @array: list to sort
 * @size: the size of the list
 * @start: the start of sublist
 * @end: the end of the sub list
 * Return: the index of the checker
*/
size_t quickCheck(int *array, size_t size, size_t start, size_t end)
{
	size_t i = start, j = start - 1;
	int checker = array[end];

	while (i < end)
	{
		if (array[i] < checker)
		{
			if (++j != i)
				swapThenPrint(array, size, i, j);
		}
		i++;
	}
	if (array[++j] != array[end])
		swapThenPrint(array, size, j, end);
	return (j);
}

/**
 * swapThenPrint - swap the the values and print the list
 * @i: index of value to swap
 * @j: index of value to swap
 * @array: list to print
 * @size: the size of the list
*/
void swapThenPrint(int *array, size_t size, size_t i, size_t j)
{
	int swap = array[i];

	array[i] = array[j];
	array[j] = swap;
	print_array(array, size);
}
