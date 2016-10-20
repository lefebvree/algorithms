#include <utility>

#include "sorting.h"

using namespace std;

/**
 * Extract the first of unsorted elements and compare with previous values to insert it at the right place
 * @param array array to sort
 * @param size  size of 'array'
 */
void insertSort ( int array[], int size ) {
    int selected; // extracted element

    for (int i = 1; i < size; i++) {
        selected = i;

        for (int j = i - 1; j >= 0; j--) {
            if (array[selected] < array[j]) {
                swap(array[selected], array[j]);
                selected--;
            }
        }
    }
}
