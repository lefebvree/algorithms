
#ifndef SORT_H
#define SORT_H

// Random array creation
void randomArray ( int t[], int n, int min, int max );

// Bubble Sort
void bubbleSort ( int t[], int n );

// Select Sort
void selectSort ( int t[], int n );

// Insert Sort
void insertSort ( int t[], int n );

// Merge Sort
void mergeSort  ( int t[], int i, int j );
void merge      ( int t[], int i, int j, int k );

// Quick Sort
void quickSort  ( int t[], int i, int j );
int  pivotSort  ( int t[], int i, int j, int p );

#endif
