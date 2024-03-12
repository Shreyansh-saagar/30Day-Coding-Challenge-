/* Leetcode 485 -> Max Consecutive Ones */
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count= 0;
        int maxcount = 0;
        int i = 0;
        while( i < nums.size()){
            if(nums[i] != 1){
                count = 0;
            }else{
                count++;
                if(maxcount < count){
                    maxcount = count;
                }
            }
            i++;
        }
        return maxcount;
    }
};