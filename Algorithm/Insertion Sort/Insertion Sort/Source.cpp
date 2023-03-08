#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
	int key;
	for (int i = 1; i < n; i++) {
		key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}





void display(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[50];
	int j = 50;
	for (int i = 0; i < 50; i++) {
		arr[i] = j--;
	}
	insertion_sort(arr, 50);
	display(arr, 50);
}