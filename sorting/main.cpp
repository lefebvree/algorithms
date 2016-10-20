
#include <iostream>
#include "sorting.h"

using namespace std;

/**
 * Execute sorting algorithm on randomly filled 't' array
 * @param  argv [ array size, array minimum value, arrray maximum value ]
 * @return      Success code
 */
int main( int argc, char const ** argv ) {

	int size, minvalue, maxvalue;

	if (argc > 1) size = atoi(argv[1]);
	else size = 25;

	if (argc > 2) minvalue = atoi(argv[2]);
	else minvalue = 0;

	if (argc > 3) maxvalue = atoi(argv[3]);
	else maxvalue = 100;

	int array[size] = {};
	randomArray(array, size, minvalue, maxvalue);

	cout << "0: bubble - 1: select - 2: insert - 3: merge - 4: quick" << endl;
	cout << "Sorting algorithm to operate: ";

	int sortingfunction;
	cin >> sortingfunction;

	cout << "[" << array[0];
	for (int i = 1; i < size; i++) cout << ", " << array[i];
	cout << "]" << endl;

	switch (sortingfunction) {
		case 0:
			bubbleSort(array, size);
			cout << "bubble sort results:" << endl;
			break;
		case 1:
			selectSort(array, size);
			cout << "select sort results:" << endl;
			break;
		case 2:
			insertSort(array, size);
			cout << "insert sort results:" << endl;
			break;
		case 3:
			mergeSort(array, 0, size);
			cout << "merge sort results:" << endl;
			break;
		case 4:
			quickSort(array, 0, size);
			cout << "quick sort results:" << endl;
			break;
	}

	cout << "[" << array[0];
	for (int i = 1; i < size; i++) cout << ", " << array[i];
	cout << "]" << endl;

	return 0;
}

/**
 * Assign random values to 'size' elements in given range
 * @param array Array to fill
 * @param size  Size of array
 * @param min   Minimum value to assign
 * @param max   Maximum value to assign
 */
void randomArray ( int array[], int size, int min, int max ) {

	srand(time(0));

	for (int i = 0; i < size; i++) {
		int randomvalue = min + (rand() % (int)(max - min + 1));
		array[i] = randomvalue;
	}

	cout << "Array of size " << size << " created" << endl;
}
