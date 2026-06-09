#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxi = nums[0];
    int mini = nums[0];
    int result = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < 0)
            swap(maxi, mini);

        maxi = max(nums[i], maxi * nums[i]);
        mini = min(nums[i], mini * nums[i]);

        result = max(result, maxi);
    }

    return result;
}

int main() {
    vector<int> nums = {2,3,-2,4};
    cout << maxProduct(nums);
}