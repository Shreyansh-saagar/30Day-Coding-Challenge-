/* Leetcode 217 -> Contains Duplicate*/

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        for(int i = 0; i < nums.size() - 1; i++){
            int ele = nums[i];
            if(ele == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};