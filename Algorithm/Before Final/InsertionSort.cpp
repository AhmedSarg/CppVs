#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) {
    int i, j, key = 0;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[8] = {11, 2, 7, 6, 1, 20, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);
    display(arr, size);
}