// Selection Sort  Run Time : O(n^2)
// Performance may be poor, but it can still work effectively for small datasets.
// Memory Usage: does not require any additional memory usage during the sorting process

#include <stdio.h>

void selection_sort(int arr[], int size);

int main(void)
{
    // Unsorted array
    int array[] = {8, 6, 4, 7, 1, 2, 36, 45, 5, 14};
    int size = sizeof(array) / sizeof(array[0]);

    selection_sort(array, size);

    return 0;s
}


void selection_sort(int arr[], int size)
{
    printf("Sorted Array: ");
    for(int i = 0, min_index = i, temp; i < size-1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        // Placing the minimum value in the sequential part
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index]  = temp;
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// output: Sorted Array: 1 2 5 4 6 7 8 14 45