#include<bits/stdc++.h>
using namespace std;
#define MAX 100001

vector<int> sieve(){
	
	//step-1: make all numbers prime numbers
	bool isPrime[MAX];
	for(int i = 0 ; i<MAX ; i++){
		isPrime[i] = true;
	}
	//step-2: delete multiple table of i
	for( int i = 2 ; i*i < MAX ; i++){
		if(isPrime[i]){
			for(int j = i*i ; j<MAX ; j+=i){
				isPrime[j] = 0;
			}
		}
	}
	//step-3: print prime numbers
	//vector<int> primes = new vector<int>();
	vector<int> primes;
//	primes->push_back(2);
	for(int i = 2;i<MAX ; i++){
		if(isPrime[i]){
			primes.push_back(i);
		}
		
	}
	return primes;
}

void segmentSieve(long long l, long long r, vector<int>& primes){
	
		bool isPrime[r-l+1];
		for(int i = 0 ; i<r-l ; i++){
			isPrime[i] = true;
		}
		for(int i = 0; i< primes.size() && primes[i] * (long long) primes[i] <= r;i++ ){
			int currentPrime = primes[i];
			long long base = (l/currentPrime)*currentPrime;
			if( base < l){
				base = base + currentPrime;
			}
			for(long long j = base ; j<=r ; j+=currentPrime){
				isPrime[j-l] = false;
			}
			if(base==currentPrime){
				isPrime[base-l] = true;
			}
		}
		for(int i = 0;i<=r-l;i++){
			if(isPrime[i]==true){
				cout<<i+l<<endl;
			}
		}
}
int main(){
	vector<int> primes = sieve();
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cout<<"Enter left and right : ";
		cin>>l>>r;
		cout<<"Prime numbers between "<<l<<" to "<<r<<" are : "<<endl;
		segmentSieve(l,r,primes);
	}
	return 0;
}
