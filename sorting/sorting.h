
#ifndef SORT_H
#define SORT_H

// Bubble Sort
void bubblesort ( int t[], int n ) ;

// Select Sort
void selectsort ( int t[], int n ) ;

// Insert Sort
void insertsort ( int t[], int n ) ;

// Merge Sort
void mergeSort  ( int t[], int i, int j ) ;
void merge      ( int t[], int i, int j, int k );

// Quick Sort
void quickSort  ( int t[], int i, int j );
int  pivotSort  ( int t[], int i, int j, int p );

#endif
