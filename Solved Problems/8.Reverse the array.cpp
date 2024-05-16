#include<iostream>
using namespace std;

void reverse(int arr[],int n){
	int s = 0;
	int e = n-1;
	
	while(s<=e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}

}
int main (){
	int arr[6];
	
	cout<<"Enter array elemnts: "<<endl;
	for(int i = 0 ; i < 6 ;i++){
		cin>>arr[i];
	}
    reverse(arr,6);
	cout<<"Reversed Array: ";
	for(int i = 0 ; i < 6 ;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
