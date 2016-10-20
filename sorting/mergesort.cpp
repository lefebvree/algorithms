#include "sorting.h"

using namespace std;

/**
 * Merge the subarray
 * @param array  array to sort
 * @param begin  begin index of the subarray
 * @param middle middle index of the subarray
 * @param end    end index of the subarray
 */
void merge ( int array[], int begin, int middle, int end ) {
    // create a subarray of the begin to the middle
    int size1 = middle - begin + 1;
    int subarray1[size1 + 1] = {};
    for (int i = 0; i < size1; i++) {
        subarray1[i] = array[begin + i];
    }

    // create a subarray of the middle to the end
    int size2 = end - middle;
    int subarray2[size2 + 1] = {};
    for (int i = 0; i < size2; i++) {
        subarray2[i] = array[middle + 1 + i];
    }

    // attribute the max value between the two subarrays in they last index
    int max = (subarray1[size1 - 1] > subarray2[size2 - 1]) ? subarray1[size1 - 1] : subarray2[size2 - 1];
    subarray1[size1] = max;
    subarray2[size2] = max;

    int index1 = 0;
    int index2 = 0;

    // merge each value of subarrays into array at the right index
    for (int i = begin; i <= end; i++) {
        if (subarray1[index1] < subarray2[index2]) {
            array[i] = subarray1[index1];
            index1++;
        } else {
            array[i] = subarray2[index2];
            index2++;
        }
    }
}

/**
 * Split recuscivly 'array' in subarray
 * @param array array to sort
 * @param begin beginning index of the subarray
 * @param end   end index of the subarray
 */
void mergeSort ( int array[], int begin, int end ) {
    int middle; // middle index of array
    if (begin != end) {
        middle = (begin + end) / 2;
        mergeSort(array, begin, middle);
        mergeSort(array, middle + 1, end);
        merge(array, begin, middle, end);
    }
}
