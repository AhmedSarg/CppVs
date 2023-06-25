#include <iostream>
using namespace std;

void min_heap(int arr[], int size, int parent) {
    int left_child = parent * 2 + 1;
    int right_child = parent * 2 + 2;
    int max = parent;

    if (left_child < size && arr[left_child] < arr[max]) {
        max = left_child;
    }
    if (right_child < size && arr[right_child] < arr[max]) {
        max = right_child;
    }
    if (max != parent) {
        swap (arr[max], arr[parent]);
        min_heap(arr, size, max);
    }
}

void build_heap(int arr[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        min_heap(arr, size, i);
    }
}

void heap_sort(int arr[], int size) {
    build_heap(arr, size);
    for (int i = size - 1; i >= 1; i--) {
        swap(arr[i], arr[0]);
        size--;
        min_heap(arr, size, 0);
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
    heap_sort(arr, size);
    display(arr, size);
}