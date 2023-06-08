// // Bubble Sorting
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int NumList[10] = {12, 29, 56, 4, 31, 9, 17, 19, 48, 3};
//     int temp;

//     cout << "Data Angka Sebelum diurutkan: \n";
//     for (int d = 0; d < 10; d++)
//         cout << setw(3) << NumList[d];
//     cout << "\n\n";
//     for (int a = 0; a < 10; a++)
//         for (int b = 0; b < 10; b++)
//             if (NumList[b] >= NumList[b + 1])
//             {
//                 temp = NumList[b];
//                 NumList[b] = NumList[b + 1];

//                 NumList[b + 1] = temp;
//             }
//     cout << "Data setelah diurutkan: \n";
//     for (int c = 0; c < 10; c++)
//     cout << setw(3) << NumList[c] << " ";
//     cout << endl;
// }

// /*Selection Sorting */
// #include <iostream>
// #include <iomanip>
// using namespace std;

// void SelectionSort(int Array[], const int Size) {
//     int i, j, small, temp;
//     for (i = 0; i < Size; i++) {
//         small = i;
//         for (j = i + 1; j < Size; j++) {
//             if (Array[j] < Array[small]) {
//                 small = j;
//             }
//         }
//         temp = Array[i];
//         Array[i] = Array[small];
//         Array[small] = temp;
//     }
// }

// int main() {
//     int NumList[10] = { 12, 29, 56, 4, 31, 9, 17, 19, 48, 3 };
//     cout << "Data sebelum diurutkan: \n";
//     for (int d = 0; d < 10; d++) {
//         cout << setw(3) << NumList[d];
//     }
//     cout << "\n\n";
    
//     SelectionSort(NumList, 10);
    
//     cout << "Data setelah diurutkan\n";
//     for (int a = 0; a < 10; a++) 
//         cout << setw(3) << NumList[a] << endl << endl;
// }

// // Shell Sorting
// #include <iostream>
// using namespace std;

// int main() {
//     int array[5]; // Array of integers
//     int length = 5; // Length of the array
//     int i, j, d;
//     int tmp, flag;

//     // Input array elements
//     for (i = 0; i < length; i++) {
//         cout << "Enter a number: ";
//         cin >> array[i];
//     }

//     d = length;
//     flag = 1;

//     while (flag || (d > 1)) {
//         flag = 0;
//         d = (d + 1) / 2;

//         for (i = 0; i < (length - d); i++) {
//             if (array[i + d] > array[i]) {
//                 tmp = array[i + d];
//                 array[i + d] = array[i];
//                 array[i] = tmp;
//                 flag = 1;
//             }
//         }
//     }

//     // Print sorted array
//     for (i = 0; i < length; i++) {
//         cout << array[i] << endl;
//     }
// }

// Quick Sorting
// #include <iostream>
// #include <iomanip>
// using namespace std;

// void quickSort(int[], int);
// void q_sort(int[], int, int);

// int main() {
//     int NumList[10] = {12, 29, 56, 4, 31, 9, 17, 19, 48, 3};
//     int temp;

//     cout << "Data sebelum diurutkan:\n";
//     for (int d = 0; d < 10; d++)
//         cout << setw(3) << NumList[d];
//     cout << "\n\n";

//     quickSort(NumList, 10);

//     cout << "Data setelah diurutkan:\n";
//     for (int i = 0; i < 10; i++)
//         cout << setw(3) << NumList[i] << endl << endl;

//     return 0;
// }

// void quickSort(int numbers[], int array_size) {
//     q_sort(numbers, 0, array_size - 1);
// }

// void q_sort(int numbers[], int left, int right) {
//     int pivot, l_hold, r_hold;
//     l_hold = left;
//     r_hold = right;
//     pivot = numbers[left];

//     while (left < right) {
//         while ((numbers[right] >= pivot) && (left < right))
//             right--;

//         if (left != right) {
//             numbers[left] = numbers[right];
//             left++;
//         }

//         while ((numbers[left] <= pivot) && (left < right))
//             left++;

//         if (left != right) {
//             numbers[right] = numbers[left];
//             right--;
//         }
//     }

//     numbers[left] = pivot;
//     pivot = left;
//     left = l_hold;
//     right = r_hold;

//     if (left < pivot)
//         q_sort(numbers, left, pivot - 1);

//     if (right > pivot)
//         q_sort(numbers, pivot + 1, right);
// }

// // Radix Sorting
// #include <iostream>
// #include <stdlib.h>
// #include <string.h>
// using namespace std;

// void radix(int byte, long N, long* source, long* dest) {
//     long count[256];
//     long index[256];
//     int i;

//     memset(count, 0, sizeof(count));

//     for (i = 0; i < N; i++)
//         count[(source[i] >> (byte * 8)) & 0xff]++;

//     index[0] = 0;
//     for (i = 1; i < 256; i++)
//         index[i] = index[i - 1] + count[i - 1];

//     for (i = 0; i < N; i++)
//         dest[index[(source[i] >> (byte * 8)) & 0xff]++] = source[i];
// }

// void radixsort(long* source, long* temp, long N) {
//     radix(0, N, source, temp);
//     radix(1, N, temp, source);
//     radix(2, N, source, temp);
//     radix(3, N, temp, source);
// }

// void make_random(long* data, long N) {
//     for (int i = 0; i < N; i++)
//         data[i] = rand() | (rand() << 16);
// }

// long data[100];
// long temp[100];
// int main(void) {
//     make_random(data, 100);
//     radixsort(data, temp, 100);

//     for (int i = 0; i < 100; i++)
//         cout << data[i] << '\n';
// }
