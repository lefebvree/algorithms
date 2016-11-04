
#include "sorting.h"
using namespace std;

/**
 * Sort 'array' from begin to end
 * @param array array to sort
 * @param begin beginning index of the subarray
 * @param end   end index of the subarray
 */
void quickSort ( int array[], int begin, int end ) {
	int pivot = array[(begin + end) / 2];

	int pivotIndex = pivotSort(array, begin, end, pivot);

	if (begin < pivotIndex - 1) quickSort(array, begin, pivotIndex - 1);
	if (pivotIndex < end) quickSort(array, pivotIndex, end);
}

/**
 * Partition array from begin to end according to pivot
 * @param array array to sort
 * @param begin beginning index of the subarray
 * @param end   end index of the subarray
 * @param pivot value of pivot
 */
int pivotSort ( int array[], int begin, int end, int pivot ) {
	while (begin <= end) {
		while (array[begin] < pivot)
		begin++;

		while (array[end] > pivot)
		end--;

		if (begin <= end) {
			int buffer = array[begin];

			array[begin] = array[end];
			array[end] = buffer;

			begin++;
			end--;
		}
	}
	return begin;
}
