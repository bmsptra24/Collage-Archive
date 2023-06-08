Shell Sorting
#include <iostream>
using namespace std;

int main() {
    int array[5]; // Array of integers
    int length = 5; // Length of the array
    int i, j, d;
    int tmp, flag;

    // Input array elements
    for (i = 0; i < length; i++) {
        cout << "Enter a number: ";
        cin >> array[i];
    }

    d = length;
    flag = 1;

    while (flag || (d > 1)) {
        flag = 0;
        d = (d + 1) / 2;

        for (i = 0; i < (length - d); i++) {
            if (array[i + d] > array[i]) {
                tmp = array[i + d];
                array[i + d] = array[i];
                array[i] = tmp;
                flag = 1;
            }
        }
    }

    // Print sorted array
    for (i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
}