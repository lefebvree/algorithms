
#ifndef SORT_H
#define SORT_H

// Merge Sort
void mergeSort ( int t[], int i, int j ) ;
void merge     ( int t[], int i, int j, int k );

// Quick Sort
void quickSort ( int t[], int i, int j );
int  pivotSort ( int t[], int i, int j, int p );

#endif
