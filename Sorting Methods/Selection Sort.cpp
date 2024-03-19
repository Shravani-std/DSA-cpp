#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[minIndex], arr[i]);
        }
    }
}

void printArray(int arr[], int size) {
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl;
}

void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    printArray(arr, size);
    displayArray(arr, size);

    selectionSort(arr, size);

    cout << "Sorted array: ";
    displayArray(arr, size);

    return 0;
}

