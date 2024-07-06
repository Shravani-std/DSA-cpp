#include<iostream>
using namespace std;
#define MAX 1000


int multiply(int x, int res[], int size) {
    int carry = 0;  

    for (int i = 0; i < size; i++) {
        int product = res[i] * x + carry;
        res[i] = product % 10;  
        carry = product / 10; 
    }
    while (carry) {
        res[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}
void fact(int n) {
    int res[MAX]; 
    res[0] = 1;  
    int size = 1; 
    for (int x = 2; x <= n; x++) {
        size = multiply(x, res, size);
    }
    for (int i = size - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    fact(n);
    return 0;
}
