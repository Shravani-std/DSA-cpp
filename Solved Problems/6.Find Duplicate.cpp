#include<iostream>
using namespace std;
int main(){
	
	int arr[6] = {2,3,5,4,2,1};
	 int ans = 0;
        for(int i=0;i<6;i++){
            ans = ans ^ arr[i];
        }
        for(int i=0;i<6;i++){
        	ans = ans^i;
		}
		
		cout<<ans;
		return 0;
}
