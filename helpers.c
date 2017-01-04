/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (value < 0)
    {
        return false ;
        
    }
    int min = 0 ; 
    int max = n - 1;
    while (n > 0)
    
    {int mid = (max - min) / 2 + (min) ;
    if (values [mid] == value)
     {return true;}
    
    else if (values [mid] < value)
    {min = mid + 1;}
      else if (values [mid] > value)
    {max = mid - 1;}
    n= max - min +1;
}
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)


    
{
 
    for (int i = 0; i < n - 1; i++)
    {
 
        int min = i;

        for (int j = i; j < n; j++) 
        {
            
            if (values[min] > values[j])
            {
                min = j;
            }
        }

        
        if (min != i)
        {
       
            int temp = values[min];
            values[min] = values[i];
            values[i] = temp;
        }
    }
}