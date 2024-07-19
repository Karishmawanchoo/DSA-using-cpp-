//Product of Array Except Self
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,3,4};
    vector<int> output = s.productExceptSelf(nums);
    // Print the result
    for (int i = 0; i < output.size(); ++i) {
        std::cout << output[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}