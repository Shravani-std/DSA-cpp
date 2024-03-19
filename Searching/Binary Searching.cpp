#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int size){
	int start = 0;
	int end = size-1;
	
	int mid = (start+end)/2;
	
	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		if(key > mid){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
		mid = (start + end)/2;
	}
	return -1;
	
}
int printArray(int arr[],int size){

	
	cout<<"Enter array elements in array  "<<endl;
	for(int i = 0; i<size ; i++){
		cin>>arr[i];
	}
	cout<<endl;

}
int displayArray(int arr[],int size)
{
		cout<<" You entered array "<<endl;
	for(int i = 0; i<size ; i++){
		cout << arr[i]<<" ";
	}
	cout<<endl;
	
}
int main(){
	int arr[100];
	int size , key;
	
	cout<<"Enter size of an array "<<endl;
	cin>>size;
	
	printArray(arr,size);
	displayArray(arr,size);
	
	cout<<"Enter Key to search "<<endl;
	cin>>key;
	
	int index = binarySearch(arr,key,size);
	if( index != -1 ){
		cout<<"Index of key is "<<index<<endl;
	}
	else{
		  cout << "Key not found" << endl;
	}
	return 0;
}

