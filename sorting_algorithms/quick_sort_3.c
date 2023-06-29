/*
1. Always select the first item as the pivot
2. Always choosing the last item as pivot
3. Picking a random item as the pivot
4. Selecting the median as the pivot --> we used this
*/

#include <stdio.h>

void quick_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
int find_median(int arr[], int low, int high);
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
        find_median(arr, low, high);
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

int find_median(int arr[], int low, int high) {
    int mid = (low + high) / 2;
    if (arr[mid] < arr[low]) {
        swap(&arr[mid], &arr[low]);
    }
    if (arr[high] < arr[low]) {
        swap(&arr[high], &arr[low]);
    }
    if (arr[mid] < arr[high]) {
        swap(&arr[mid], &arr[high]);
    }
    return high;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
