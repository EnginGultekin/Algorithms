# Sorting Algorithms - Sıralama Algoritmaları

### Contents - İçerik

#### First in english and then in turkish - Önce ingilizce sonra türkçe


### *********************** EN ***********************

### 1. `Selection Sort (Seçme Sıralama)` :  O(n^2)
It finds the smallest element in the array and swaps it sequentially to perform sorting.

### 2. `Bubble Sort (Kabarcık Sıralama)` :  O(n^2)
It performs sorting by comparing two elements and swapping their positions.

### 3. `Insertion Sort (Ekleme Sıralaması)` :  O(n^2)
It performs sorting by taking elements one by one and placing them in the appropriate position.

### 4. `Quick Sort (Hızlı Sıralama)` :  BestCase O(n logn), WorstCase: O(n^2) 
It selects a pivot element and partitions the array so that smaller elements are on the left and larger elements are on the right of the pivot. It is recursively applied to the divided subarrays.

### 5. `Merge Sort (Birleştirme Sıralaması)`
It divides the array into smaller subarrays, performs sorting on them, and then merges the sorted subarrays to perform sorting.

### 6. `Heap Sort (Yığın Sıralaması)` 
It performs sorting by placing the array elements in a heap. It takes the largest element, places it at the end of the array, and performs sorting by removing it from the heap.

### 7. `Bucket Sort (Kova Sıralaması)` 
It divides the elements into specific ranges, creates separate buckets for each range, and places the elements into the buckets to perform sorting.

### 8. `Counting Sort (Sayım/Sayaç Sıralaması)` 
It performs sorting by using a counting array. It counts the values of the elements based on the indices of the counting array and places them in a sorted manner.

### 9. `Radix Sort (Radix Sıralaması)` 
It performs sorting by considering the elements digit by digit. It first sorts based on one digit and then sorts based on the other digits.
Radix Sort: It performs sorting by grouping the elements based on bases. It is commonly used in binary systems.

### 10. `Shell Sort (Kabuk Sıralama)` 
It performs sorting by dividing the elements into groups with a specific gap, and then repeatedly performs sorting by decreasing the gap.

### 11. `Tree Sort (Ağaç Sıralaması)` 
It performs sorting by using a tree data structure. It inserts the elements into a tree to perform sorting and then retrieves them from the tree in a sorted manner.

### 12. `Bitonic Sort (Küçükten Büyüğe Sıralama)` 
It performs sorting by using a comparison network. The sorting process is done in multiple stages.

### 13. `Cycle Sort (Başlangıç Sıralaması)` 
It performs sorting with minimal operations to move each element to its correct position. It rotates the elements to their correct positions to perform sorting.

### 14. `Tim Sort (Tim Sıralaması)` 
It is a combination of merge sort and insertion sort. It merges the smaller subarrays and performs insertion sort on the larger subarrays.

### 15. `Pigeonhole Sort (Pigeonhole Sıralaması)` 
It performs sorting by placing the elements in their correct positions. The values of the elements are calculated based on the target positions and they are placed accordingly.

### 16. `Radix Exchange Sort (Gömme Sıralaması)` 
It performs sorting based on bit groups. It creates smaller groups within larger groups to perform sorting.


### *********************** TR ***********************

### 1. `Seçme Sıralama (Selection Sort)` 
Dizideki en küçük elemanı bulup sırasıyla yer değiştirerek sıralama yapar.

### 2. `Kabarcık Sıralama (Bubble Sort)` 
İki elemanı karşılaştırarak yerlerini değiştirerek sıralama yapar.

### 3. `Ekleme Sıralaması (Insertion Sort)` 
Elemanları sırasıyla alıp uygun konuma yerleştirerek sıralama yapar.

### 4. `Hızlı Sıralama (Quick Sort)` 
Bir pivot elemanı seçerek, onun sağında küçük ve solunda büyük elemanlar olacak şekilde bölerek sıralama yapar. 
Bölünmüş alt diziler üzerinde tekrar uygulanır.

### 5. `Birleştirme Sıralaması (Merge Sort)` 
Dizi sıralama işlemini küçük alt dizilere bölerek yapar ve ardından sıralanmış alt dizileri birleştirerek sıralama yapar.

### 6. `Yığın Sıralaması (Heap Sort)` 
Bir yığında (heap) dizi elemanlarını yerleştirerek sıralama yapar. En büyük elemanı alıp dizinin sonuna yerleştirir ve yığından çıkararak sıralama yapar.

### 7. `Kova Sıralaması (Bucket Sort)` 
Elemanları belirli aralıklara bölerek, her aralık için ayrı bir kova oluşturup elemanları kovalara yerleştirerek sıralama yapar.

### 8. `Sayım/Sayaç Sıralaması (Counting Sort)` 
Elemanları bir sayaç dizisi kullanarak sıralama yapar. Elemanların değerlerini sayaç dizisindeki indekslere göre sayar ve sıralı bir şekilde yerleştirir.

### 9. `Radix Sıralaması (Radix Sort)` 
Elemanları basamaklar halinde sıralama yapar. Önce bir basamağa göre sıralar, ardından diğer basamağa göre sıralama yapar.
Taban Sıralaması (Radix Sort): Elemanları tabanlara göre gruplara ayırarak sıralama yapar. Genellikle ikili (binary) sistemde kullanılır.

### 10. `Kabuk Sıralama (Shell Sort)` 
Aralarındaki belirli bir mesafe olan elemanları gruplara ayırarak sıralama yapar, ardından mesafeyi giderek azaltarak tekrar sıralama yapar.

### 11. `Ağaç Sıralaması (Tree Sort)` 
Elemanları bir ağaç yapısı kullanarak sıralama yapar. Elemanları bir ağaca ekleyerek sıralar ve ardından ağaçtan çıkararak sıralı bir şekilde yerleştirir. 

### 12. `Küçükten Büyüğe Sıralama (Bitonic Sort)` 
Elemanları karşılaştırma ağı kullanarak sıralama yapar. Sıralama işlemini birkaç aşamada gerçekleştirir.

### 13. `Başlangıç Sıralaması (Cycle Sort)` 
Her elemanın doğru pozisyona taşınması için minimum işlemle sıralama yapar. Dizi elemanlarını doğru pozisyonlarına döndürerek sıralar.

### 14. `Tim Sıralaması (Tim Sort)` 
Birleştirme sıralaması ve ekleme sıralamasının birleşimi olan bir algoritmadır. Küçük alt dizileri birleştirirken büyük alt dizileri ekleme sıralamasıyla sıralar.

### 15. `Pigeonhole Sıralaması (Pigeonhole Sort)` 
Elemanları doğru pozisyonlarına yerleştirerek sıralama yapar. Elemanların değerleri, hedef pozisyonlara göre hesaplanır ve yerleştirilir.

### 16. `Gömme Sıralaması (Radix Exchange Sort)` 
Elemanları bit gruplarına göre sıralama yapar. Daha büyük gruplar içerisinde daha küçük gruplar oluşturarak sıralama işlemini gerçekleştirir.


### **********************************************