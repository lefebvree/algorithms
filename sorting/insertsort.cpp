#include <utility>

#include "sorting.h"

using namespace std;

/*
 * Extract the first of unsorted elements and compare with previous values to insert it at the right place
 *  @param
 *    t[] ->  array to sort
 *    n   ->  size of 't'
 *
 *  @var
 *    selected ->  index of the selected element
 */
void insertSort ( int t[], int n ) {
    int selected;

    for (int i = 1; i < n; i++) {
        selected = i;

        for (int j = i - 1; j >= 0; j--) {
            if (t[selected] < t[j]) {
                swap(t[selected], t[j]);
                selected--;
            }
        }
    }
}
