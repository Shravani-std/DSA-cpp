#include <iostream>
using namespace std;

class Solution {
public:
    int peak_of_Mountain_Array(int arr[], int size) {
        int start = 0;
        int end = size - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start; // or end, as they are the same at this point
    }
};

int main() {
    int arr[6] = {0, 2, 3, 4, 2, 1 };
    int size = 6;
    Solution solution;
    cout << "Peak of mountain array is at index: " <<solution.peak_of_Mountain_Array(arr, size)<< endl;
    return 0;
}

