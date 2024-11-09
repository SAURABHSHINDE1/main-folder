#include<stdio.h>

void selection_sort(int a[], int n )
{
    int i, j, min, temp;
    for( i = 0; i < n; i++ )
    {
        min = i;
        for( j =n-1; j>=0 ; j--)
        {