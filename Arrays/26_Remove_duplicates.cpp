/* Leetcode 26 -> Remove Duplicates from Sorted Array */

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }


        // Method 1
        // int count = 0;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] != nums[count]){
        //         count++;
        //         nums[count] = nums[i];
        //     }
        // }
        // return count + 1;

        // Method 2
        int count = 1;
        for(int i = 1; i< nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};