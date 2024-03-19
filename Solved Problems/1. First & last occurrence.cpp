#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	
	int mid = start + (end-start)/2;
	
	int ans = -1;
	
	while(start <= end)
	{
		if(arr[mid] == key)
		{
		 ans = mid;
		 end = mid - 1; //leftmost ie first occurance is lies in left part so
		}
		if(key > arr[mid]){
			start = mid + 1;
		}
		else if(key < arr[mid]){
			end = mid - 1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
}
int lastOcc(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	
	int mid = start + (end-start)/2;
	
	int ans = -1;
	
	while(start <= end){
		if(arr[mid] == key){
		 ans = mid;
		start = mid + 1; //rightmost ie last occurance is lies in right part so
		}
		if(key > arr[mid]){
			start = mid + 1;
		}
		else if(key < arr[mid]){
			end = mid - 1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
}
int main(){
	int arr[7] = {1,2,5,5,9,5,1};
	
	cout<<"First occurance of 5 is at Index : "<<firstOcc(arr,7,5)<<endl;
	cout<<"last occurance of 5 is at Index : "<<lastOcc(arr,7,5)<<endl;
	return 0;
}
