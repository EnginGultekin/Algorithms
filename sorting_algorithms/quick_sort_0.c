/*
Time Complexity: The Quick Sort algorithm has a time complexity of ```  O(n log n)  ``` in the mean case.
However, in the worst case (when the array is completely in reverse order), the time complexity can be O(n^2).
This happens when the pivot is always the smallest or largest element.
However, in most cases Quick Sort runs faster than other sorting algorithms.

Memory Complexity: The Quick Sort algorithm uses a heap recursive structure.
A stack frame is created for each recursive call. Worst case stack depth,
can be O(n) depending on the size of the array. Therefore, the memory usage of Quick Sort,
has O(n) memory complexity in the worst case. However, in average case memory usage
It will be at O(log n) level.

*/

#include <stdio.h>

void quick_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void print_array(int arr[], int size);
void swap(int* a, int* b);

int main(void)
{
    // Unsorted array
    int array[] = {8, 64, 52, 7, 2, 36, 45, 5, 14, 85, 16};
    int size = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0, size - 1);

    printf("Sorted Array: ");
    print_array(array, size);

    return 0;
}


void quick_sort(int arr[], int low, int high)
{
    if(low < high)
    {
        // pi is pivot number
        int pi = partition(arr, low, high);     // split numbers left and right

        quick_sort(arr, low, pi - 1);       // for numbers greater than the pivot
        quick_sort(arr, pi + 1, high);      // for numbers smaller than the pivot
    }
}

int partition(int arr[], int low, int high)
{

  int pivot = arr[high];    // We select the last element as the pivot
  int i = low;            // Shows the element following the low index

  for(int j = low; j < high; j++)
  {
      // If current element is less than or equal to pivot, swap and increase the low index by one
      if(arr[j] <= pivot)
      {
          swap(&arr[i], &arr[j]);
          i++;   // increment i to insert pivot at the end
      }
  }

  swap(&arr[i], &arr[high]);
  return i;     // return pivot index
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


/*
NOTE:

1. Always select the first item as the pivot
2. Always choosing the last item as pivot --> we used this
3. Picking a random item as the pivot
4. Selecting the median as the pivot

After selecting the pivot element first, elements larger than pivot to the right, elements smaller than pivot
sorting is performed to the left. Numbers that are equal to the pivot element
can switch to either side of the pivot element, depending on whether it is small to large or large to small.
In coding, two indices are required for the formation of right and left.

Calling recursively, the same process is repeated for the resulting small arrays.
By choosing a pivot from the elements on the right and a pivot from the elements on the left
The same process happens again and is sorted. The same process takes place until the whole array is sorted
*/