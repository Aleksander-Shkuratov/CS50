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
    int left = 0;
    int right = n - 1;
    int middle;

    if (value <= 0){
        return false;
    }
    else {
        while (left <= right){
            middle = (left + right) / 2;

            if (value == values[middle]){
                return true;
            }
            else if (value < values[middle]){
                right = middle - 1;
            }
            else if (value > values[middle]){
                left = middle + 1;
            }
        }
    }
    
//     int index = -1;

//     if (value <= 0){
//         return false;
//     }
//     else {
//         for (int i = 0; i < n; i++){
//             if (values[i] == value){
//                 index = i;
//                 break;
//             }
//         }
//         if (index >= 0){
//             return true;
//         }  
//         else{
//             return false;
//         }
//     }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    int i, j, tmp;

    i = 0;
    do {
        j = 0;
        do{
            if(values[j] > values[j + 1]){
                tmp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = tmp;
            }
            j++;
        }
        while(j < n - 1);
        i++;
    }
    while(i < n);
    
    return;
}
