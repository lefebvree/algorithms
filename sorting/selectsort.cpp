#include <utility>

#include "sorting.h"

using namespace std;

/**
 * Save the first element as minimum and check if there is a lower element
 * @param array array to sort
 * @param size  size of 'array'
 */
void selectSort ( int array[], int size ) {
    int min; // index of the minimum value of unsorted element

    for (int i = 0; i < size - 1; i++) {
        min = i;

        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        swap(array[i], array[min]);
    }
}
