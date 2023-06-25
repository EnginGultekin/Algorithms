// Bubble Sort  Run Time : O(n^2)
// Performance: can be inefficient in terms of performance on large datasets.
// Memory Usage: is just O(1), does not require any additional memory usage during the sorting process
/*
Bubble sort doesn't sort by initials like selection sort does. It moves by making a binary comparison and 
placing the largest at the end, so that the number of comparisons at the beginning of each loop is reduced.
*/

#include <stdio.h>

void bubble_sort(int arr[], int size);

int main(void) 
{
    // Unsorted array
    int array[] = {8, 6, 4, 7, 1, 2, 36, 45, 5, 14};
    int size = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, size);

    return 0;
}

void bubble_sort(int arr[], int size)
{
    // Control variable to finish operation early if array is sequential
    int isSorted = 1;
     
    for(int i = 0, temp; i < size-1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                // If a displacement has occurred, let's mark the array as unordered
                isSorted = 0;
            }
        }
        if(isSorted == 1) break;
    }
    
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


