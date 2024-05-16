#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {

    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

int main() {
    vector<int> nums(5);
    int k;
    cout << "Enter k, how many numbers to rotate: ";
    cin >> k;

    cout << "Enter array numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    rotate(nums, k);

    cout << "Array after rotate: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

