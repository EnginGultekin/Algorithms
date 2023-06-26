#include <stdio.h>

void recursive_insertion_sort(int arr[], int size);
void print_array(int arr[], int size);

int main() {
    int array[] = {2, 64, 25, 5, 12, 22, 75, 11};
    int size = sizeof(array) / sizeof(array[0]);

    recursive_insertion_sort(array, size);

    printf("Sıralanmış dizi: ");
    print_array(array, size);

    return 0;
}

void recursive_insertion_sort(int arr[], int size) {
    // Base case: No need to sort if array size is 1 or less
    if (size <= 1) return;

    // Sort n-1 elements of array
    recursive_insertion_sort(arr, size-1);

    // Put the last element in its correct position
    int last = arr[size - 1];
    int j = size - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}