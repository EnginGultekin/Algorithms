#include <stdio.h>

void printArray(int arr[], int size);
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);

int main()
{
    // Unsorted array
    int array[] = {8, 6, 4, 7, 1, 2, 36, 45, 5, 14};
    int size = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, size - 1);

    printf("Sorted Array: ");
    printArray(array, size);

    return  0;
}

void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid =  left + (right - left) / 2;

        // Sort first half
        mergeSort(arr, left, mid);
        // Sort second half
        mergeSort(arr, mid + 1, right);

        // Combine the two halves
        merge(arr, left, mid, right);
    }
}


void merge(int arr[], int left, int mid, int right)
{

    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Yardımcı dizileri oluşturalım
    int L[n1], R[n2];

    // Orjinal verileri yardımcı dizilere kopyalıyalım
    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];


    // Yardımcı dizileri birleştir
    i = 0, j = 0, k = left;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Kopyalanan kalan elemanları ekle, eğer koşullardan biri sağlanmassa
    // o dizideki tüm elemanlar eklenmiş demektir.
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}