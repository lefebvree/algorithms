#include <utility>

#include "sorting.h"

using namespace std;

/*
 * Save the first element as minimum and check if there is a lower element
 *  @param
 *    t[] ->  array to sort
 *    n   ->  size of 't'
 *
 *  @var
 *    min ->  indice of the minimum value of unsorted element
 */
void selectSort ( int t[], int n ) {
    int min;

    for (int i = 0; i < n - 1; i++) {
        min = i;

        for (int j = i + 1; j < n; j++) {
            if (t[j] < t[min]) {
                min = j;
            }
        }
        swap(t[i], t[min]);
    }
}
