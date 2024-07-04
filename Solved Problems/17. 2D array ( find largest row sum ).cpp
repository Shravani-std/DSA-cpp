#include<iostream>
using namespace std;

void sum(int arr[3][3],int row,int col){
	for(int row = 0;row<3;row++){
		int sum=0;
		for(int col = 0;col<3;col++){
			
			sum += arr[row][col];
			

			cout<<sum<<" ";
		}
	}
	cout<<endl;
}
int largest(int arr[3][3],int row,int col){
	int max = INT_MIN;
	int rowIndex = -1;
	
	for(int row = 0;row<3;row++){
		int sum = 0;
		for(int col = 0;col<3;col++){
			sum += arr[row][col];
		}
		if(sum > max){
			max = sum;
			rowIndex = row;
		}
	}
	cout<<"Maximum sum is: "<<max<<endl;
	cout<<"At index: ";
	return rowIndex;
}
int main(){
	
	int arr[3][3];
	
	cout<<"Enter no.: "<<endl;
	for(int row = 0;row<3;row++){
		for(int col = 0;col<<3;col++){
			cin>>arr[3][3];	
		}
		
	}
	for(int row = 0;row<3;row++){
		for(int col = 0;col<<3;col++){
			cout<<arr[3][3];	
		}
		cout<<endl;
	}
	int ans1=sum(arr,3,3);
	cout<<"Sum : "<<ans1<<endl;
	int ans  = largest(arr,3,3);
	cout<<"Maximum:"<<ans<<endl;
	
	return 0;
}

