#include <iostream>
using namespace std;

void quick_sort(int arr[], int start, int end) {
    int left = start;
    int right = end;
    int pivot = left;

    while (left != right) {
        if (pivot == left) {
            if (arr[pivot] <= arr[right]) {
                right--;
            }
            else {
                swap(arr[pivot], arr[right]);
                pivot = right;
            }
        }
        else if (pivot == right) {
            if (arr[left] <= arr[pivot]) {
                left++;
            }
            else {
                swap(arr[left], arr[pivot]);
                pivot = left;
            }
        }
    }

    if (start < pivot) {
        quick_sort(arr, start, pivot - 1);
    }
    if (pivot < end) {
        quick_sort(arr, pivot + 1, end);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {11, 2, 7, 6, 1, 20, 3, 5};
    int size = sizeof(arr) / 4;
    quick_sort(arr, 0, size - 1);
    display(arr, size);
}