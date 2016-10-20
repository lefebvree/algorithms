#include <utility>

#include "sorting.h"

using namespace std;

/**
 * Look into 'array' and swap two elements if the first is uper than the second
 * @param array array to sort
 * @param size  size of 'array'
 */
void bubbleSort ( int array[], int size ) {
    bool swapped = true; // if two elements are swapped or not
    do {
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}
