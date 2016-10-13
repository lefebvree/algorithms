#include <utility>

#include "sorting.h"

using namespace std;

/*
 * Look into 't' and swap t[i] and t[i+1] if t[i] is uper than t[i+1]
 *
 *  t[] -> array to sort
 *  n   -> size of 't'
 */
void bubblesort(int t[], int n) {
    bool swapped = true;
    do {
        swapped = false;
        for(int i = 0; i < n; i++) {
            if(t[i] > t[i+1]) {
                swap(t[i], t[i+1]);
                swapped = true;
            }
        }
    } while(swapped);
}
