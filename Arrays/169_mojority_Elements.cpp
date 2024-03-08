/* Leetcode 169 -> Majority Elements */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int count = 1; 
    int majorityElement = nums[0];
    for (int i = 1; i < n; ++i) {
        if (nums[i] == majorityElement) {
            count++; 
        } else {
            count--;
            if (count == 0) {
                majorityElement = nums[i];
                count = 1;
            }
        }
    }
    return majorityElement;
    }
};