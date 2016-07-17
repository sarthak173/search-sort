/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if(n<0)
    {
        return false;
    }
    int first = 0, last = n-1,mid,found=0;
    while((first<=last) && (found ==0))
    {
        mid = (first+last)/2;
        if(values[mid]==value)
        {
            found = 1;
            return true;
            break;
        }
        if(value>values[mid])
        
            first = mid+1;
        else if(value<values[mid])
            last = mid-1;
        
    }
        return false;
  
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int temp;
    for(int i = 0 ; i < n - 1  ; i++ )
    {
         for(int j = 0 ; j < n - 1 ; j++ )
         {
              if(values[j]>values[j+1])
              {
                  temp = values[j];
                  values[j] = values[j+1];
                  values[j+1] = temp;
              }
         }
         
    }
    return;
}