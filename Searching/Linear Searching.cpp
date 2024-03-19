#include<iostream>
using namespace std;

int  linearSearch(int arr[] , int n , int key){
	for (int i = 0 ; i < n ; i++){
		if(arr[i] == key){
		return 1;
		}	

	}
	return 0;

}

int main(){
	int arr[100];
	int n ,key;
	
	cout<<"Enter size of an array "<<endl;
	cin>>n;
	
	cout<<"Enter array elements in array  "<<endl;
	for(int i = 0; i<n ; i++){
		cin>>arr[i];
	}
	
	cout<<" You entered array "<<endl;
	for(int i = 0; i<n ; i++){
		cout << arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter Key to search "<<endl;
	cin>>key;
	
	int found = linearSearch(arr,n,key);
	if(found){
		cout<<"We found a key "<<endl;
	}
	else{
		cout<<"Key is not present"<<endl;
	}
}
