#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int p, int mid, int q) {
	int i, j, k;
	int n1 = mid - p + 1;
	int n2 = q - mid;
	int* left = new int[n1];
	int* right = new int[n2];
	for (i = 0; i < n1; i++) {
		left[i] = arr[p + i];
	}
	for (j = 0; j < n2; j++) {
		right[j] = arr[mid + j + 1];
	}
	i = 0;
	j = 0;
	k = p;
	while (i < n1 && j < n2) {
		if (left[i] < right[j]) {
			arr[k] = left[i];
			i++;
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = right[j];
		j++;
		k++;
	}
}

void MergeSort(int arr[], int p, int q) {
	int mid = 0;
	if (p < q) {
		mid = (p + q) / 2;
		MergeSort(arr, p, mid);
		MergeSort(arr, mid + 1, q);
		Merge(arr, p, mid, q);
	}
}

int main() {
	int arr[7] = { 99, 6, 76, 15, 58, 35, 86 };
	MergeSort(arr, 0, 6);
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
}