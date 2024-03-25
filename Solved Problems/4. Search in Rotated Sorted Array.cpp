#include <iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start < end) {
        if (arr[mid] > arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key){
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int findPosition(int arr[], int size, int key)
{
    int pivot = getPivot(arr, size);
    if (arr[pivot] <= key && key <= arr[size - 1]) {
        return binarySearch(arr, pivot, size - 1, key);
    } else {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int main() {
    int arr[10] = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3};
    int size = 10;
    int key = 6;
    int position = findPosition(arr, size, key);
    if (position != -1) {
        cout << "Element found at index " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

