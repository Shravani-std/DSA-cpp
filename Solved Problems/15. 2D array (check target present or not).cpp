#include<iostream>
using namespace std;

bool isPresent(int arr[3][3],int target,int row,int col){
		for(int row = 0; row < 3 ; row++){
			for(int col = 0; col < 3 ; col++){
				if(arr[row][col] == target){
					return 1;
				}
		}
	}
	return 0;
}
int main(){
	int arr[3][3];
	cout<<"Enter no."<<endl;
	for(int row = 0; row < 3 ; row++){
		for(int col = 0; col < 3 ; col++){
			cin>>arr[row][col];
		}
	}
	
	for(int row = 0; row < 3 ; row++){
		for(int col = 0; col < 3 ; col++){
		   cout<<arr[row][col];
		}
		cout<<endl;
		}
		int target;
	cout<<"Enter no.you want to find:"<<endl;
	cin>>target;
	
			if(isPresent(arr,target,3,3)){
				cout<<" is found";
			}
			else{
				cout<<". is not found";
			}
		
	
	
}
