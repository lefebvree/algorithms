
#include "sorting.h"
using namespace std;

// Sort 't' array from index 'i' to index 'j'
void quickSort ( int t[], int i, int j ) {
	int pivot = t[(i + j) / 2];

	int pivotIndex = pivotSort(t, i, j, pivot);

	if (i < pivotIndex - 1) quickSort(t, i, pivotIndex - 1);
	if (pivotIndex < j) quickSort(t, pivotIndex, j);
}

// Partition 't' array from index 'i' to index 'j' regarding value of 'p'
int pivotSort ( int t[], int i, int j, int p ) {
	while (i <= j) {
		while (t[i] < p)
		i++;

		while (t[j] > p)
		j--;

		if (i <= j) {
			int a = t[i];

			t[i] = t[j];
			t[j] = a;

			i++;
			j--;
		}
	}
	return i;
}
