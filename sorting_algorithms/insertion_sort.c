// Its complexity is O(n^2).
// It works efficiently on small datasets.
// It is an algorithm with low success in large arrays.
// Sorts the array to be sorted in place. It does not require any additional memory space.
// New elements can also be added to the data during sorting.


#include <stdio.h>

void insertion_sort(int arr[], int size);
void print_array(int arr[], int size);

int main(void)
{
    // Unsorted array
    int array[] = {8, 6, 4, 7, 1, 2, 36, 45, 5, 14};
    int size = sizeof(array) / sizeof(array[0]);

    insertion_sort(array, size);
    
    printf("Sorted Array: ");
    print_array(array, size);

    return 0;
}


void insertion_sort(int arr[], int size)
{
    int i = 1, j, key;
    for(; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        
        // Shift the elements larger than the end of the row
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


/*
Example 

20,15,5,1,9,13 dizisi sıralanacak olsun. Bu diziyi araya ekleme algoritması yardımıyla sıralamak için;

1. Dizinin ikinci elemanı başlangıç elemanı olarak seçilir.  20,15,5,1,9,13

2. Daha sonra 15 ile 20 kıyas edilir. 15 < 20 olduğu için 15 başa alınır 
ve 20 ikinci sıraya yerleşir. Dizinin yeni hali böyle olur: 15,20,5,1,9,13

3. Şimdi de üçüncü eleman olan 5 ile 20 kontrol edilir. 5 < 20 ancak aynı 
zamanda 5 < 15 olduğundan 5 sayısı en başa alınır ve sayılar sırasına göre 
kaydırılır. Dizinin yeni hali: 5,15,20,1,9,13 olur.

4. Bu adımda da sıra dördüncü eleman yani 1 sayısına bakmaya gelmiştir. 
1 hepsinden küçük olduğu için direk sola kaya kaya en başa yerleşir ve diğer sayılarda 
birer sağa kayarak kendi sırasını alırlar. Dizinin son hali: 1,5,15,20,9,13 olacaktır.

5. Bu adımda sıralanmak üzere bakılacak indis değeri beştir. Yani karşılığında bulunan eleman 
9’dur. 9 sayısı solundaki 20,15,5,1 ile kontrol edilir ve kendi yerine araya 
girerek dizinin son halini şu şekilde oluşturur: 1,5,9,15,20,13.

6. Bu adımı son adım olarak düşünebiliriz. Burada da dizinin altıncı indis değerinde 
bulunan eleman olan 13 kontrol edilir. 13 < 20, 13 < 15 ve 13 > 9 kontrolü yapılır ve 
araya girerek kendisine ait olan sırasında yerini alır. 

Dizinin son hali ise : 1,5,9,13,15,20 olarak sıralanmış olur.

*/