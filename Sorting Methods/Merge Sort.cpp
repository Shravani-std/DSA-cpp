#include<iostream>

using namespace std;

void mergeSort(int arr1[],int n,int arr2[],int m,int arr3[]){
	int i = 0, j = 0;
	int k = 0;
	
	while( i<n && j<m){
		if( arr1[i] < arr2[j]){
			arr3[k++] = arr1[i++];
		}
		else{
			arr3[k++] = arr2[j++];

		}
		
	}
	while( i<n ){
		arr3[k++] = arr1[i++];

	}
	while( j<m ){
		arr3[k++] = arr2[j++];

	}
}
void print(int ans[],int n){
	for(int i = 0; i<n; i++){
		cout<<ans[i]<<" ";
		
	}
	cout<<endl;
}

int main(){
    int arr1[4] = {1, 3, 5, 6};
    int arr2[3] = {2, 4, 7};
	int arr3[7] = {0};
//	int n = 4,m=3;
	mergeSort(arr1,4,arr2,3,arr3);
	print(arr3, 7);
	return 0;
}
