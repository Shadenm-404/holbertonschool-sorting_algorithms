#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 *
 * Description:
 * Prints the array after each swap (as required). Uses an early-stop
 * optimization: if no swaps occur in a pass, the array is already sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int swapped;

	if (array == NULL || size < 2)
		return;

	n = size;
	do {
		swapped = 0;
		for (i = 0; i + 1 < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (n > 0)
			n--;
	} while (swapped);
}
