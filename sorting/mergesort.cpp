
#include "sorting.h"
using namespace std;

// Sort 't' array from index 'i' to index 'j'
void mergeSort ( int t[], int i, int j ) {
    if (i < j) {

        int k = (i + j - 1) / 2;

        mergeSort(t, i, k);
        mergeSort(t, k+1, j);

        merge(t, i, k, j);
    }
}

// Merge array from index 'i' and 'j' to array from index 'j' and 'k' numerically
void merge ( int t[], int i, int j, int k ) {

    int a = j - i + 1;
    int b = k - j;

    int ta[a + 1] = {};
    for (int x = 0; x < a; x++) ta[x] = t[i + x];

    int tb[b + 1] = {};
    for (int x = 0; x < b; x++) tb[x] = t[j + x + 1];

    int max = (t[j] > t[k]) ? t[j] : t[k];
    ta[a] = max;
    tb[b] = max;

    int posA = 0;
    int posB = 0;

    for (int x = i; x <= k; x++) {
        if (ta[posA] <= tb[posB]) {
            t[x] = ta[posA];
            posA++;
        } else {
            t[x] = tb[posB];
            posB++;
        }
    }
}
