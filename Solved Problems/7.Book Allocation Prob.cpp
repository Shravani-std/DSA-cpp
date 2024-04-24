#include<iostream>
using namespace std;

bool isPossibleSol(int arr[], int n, int m , int mid)
{
	int studentCount = 1;
	int pageSum = 0;
	
	for(int i = 0; i < n ; i++)
	{
		if((pageSum += arr[i] ) < mid )
		{
			pageSum = pageSum + arr[i];
		}
		else
		{
			studentCount++;
			if(studentCount > m && arr[i] > i){
				return false;
			}
			pageSum = arr[i];
		}
	}
	return true;
}
int bookAllocation(int arr[], int n, int m)
{
	int s = 0; //s=start
	int sum = 0;
	
	// addition of all array elements
	for(int i = 0 ; i <= n ; i++){
		sum = sum + arr[i];
	}
	int e = sum; //e=end
	
	int mid = s + (e-s)/2;
	int ans = -1; 
	 
	while( s <= e )
	{
		if(isPossibleSol(arr,n,m,mid))
		{
			ans = mid;  //for storing
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

int main(){
 int arr[50];
    int n, m;
    cout << "Enter no. of students: ";
    cin >> m;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter arr:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = bookAllocation(arr, n, m);
    cout << "Minimum number of pages: " << result << endl;

    return 0;
}
