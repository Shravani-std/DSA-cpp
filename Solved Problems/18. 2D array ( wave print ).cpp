#include<iostream>
#include<vector>
using namespace std;

vector<int> wave(vector<vector<int>> arr, int row, int col){
	vector<int>ans;
	
	for(int c = 0 ; c < col ; c++){
		if(c & 1){
				for(int r = row - 1 ; r >= 0 ; r++){
					ans.push_back(arr[r][c]);
				}
		}
		else{
				for(int r = 0; r < row; r++){
					ans.push_back(arr[r][c]);
				}
		}
	
	}
	return ans;
}
int main(){
	
	vector<vector<int>> arr(4,vector<int>(4));
	
	cout<<"Enter no."<<endl;
	for(int row = 0; row < 4; row++){
		for(int col = 0; col < 4 ; col++){
			cin>>arr[row][col];
		}
		
	}
	cout<<"Normal: "<<endl;
		for(int row = 0; row < 4; row++){
		for(int col = 0; col < 4;col++){
			cout<<arr[row][col];
		}
		cout<<endl;
	}
	vector<int> ans1 = wave(arr,4,4);
	cout<<"Wave:"<<endl;
	cout<<ans1<<" ";
	
}
