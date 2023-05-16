#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int *left_arr = new int[n1];
    int *right_arr = new int[n2];

    for (i = 0; i < n1; i++) {
        left_arr[i] = arr[start + i];
    }
    for (j = 0; j < n2; j++) {
        right_arr[j] = arr[mid + 1 + j];
    }

    i = 0, j = 0;
    k = start;
    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        }
        else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int start, int end) {
    int mid = 0;
    if (start < end) {
        mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[8]= {11, 2, 7, 6, 1, 20, 3, 5};
    int size = sizeof(arr) / 4;
    merge_sort(arr, 0, size - 1);
    display(arr, size);
}