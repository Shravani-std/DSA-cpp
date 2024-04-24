#include<iostream>
#include<vector>
using namespace std;

void mergeSort(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0;
    int k = 0;
    
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(j < m){
        arr3[k++] = arr2[j++];
    }
}

void mergeSortAndPrint(int arr1[], int n, int arr2[], int m){
    int arr3[n + m] = {0}; // Make arr3 the correct size
    
    mergeSort(arr1, n, arr2, m, arr3);
    
    // Print the sorted array
    for(int i = 0; i < n + m; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[4] = {1, 5, 3, 6};
    int arr2[3] = {7, 2, 4};

    mergeSortAndPrint(arr1, 4, arr2, 3);

    return 0;
}

