#include <iostream>
using namespace std;

class Solution{

public:
	long long int squareRoot(int n){
		int s = 0;
		int e = n;
		int mid = s + (e-s)/2;
	
		int ans = -1;
		
		while(s<=e){
		
			int square = mid*mid;
		
		if(square == n){
			return mid;
		}
	    if(square < n){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
	int mySqrt(int x){
		return squareRoot(x);
	}
	
    double morePrecision(int n, int precision, int tempSol){
        double factor = 1;
        double ans = tempSol;
        for(int i = 0; i < precision; i++){
            factor /= 10;
            for(double j = ans; j * j < n; j += factor){
                ans = j;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    int x;
    cin >> x;
    int tempSol = s.mySqrt(x);
    cout << "Square root of " << x << " is: " << tempSol << endl;
    cout << "More precision: " << s.morePrecision(x, 3, tempSol) << endl;
    return 0;
}
