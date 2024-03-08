/* Leetcode 136 -> Single Number */

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int num :nums){
            res ^= num;
        }
        return res;

        // int n = nums.size();
        // for (int i = 0; i < n; ++i) {
        //     bool foundDuplicate = false;
        //     for (int j = 0; j < n; ++j) {
        //         if (i != j && nums[i] == nums[j]) {
        //             foundDuplicate = true;
        //             break;
        //         }
        //     }
        //     if (!foundDuplicate) {
        //         return nums[i];
        //     }
        // }
        // return -1;
    }
};