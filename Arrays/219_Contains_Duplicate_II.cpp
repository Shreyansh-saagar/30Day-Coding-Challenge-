/* Leetcode 219 -> Contains Duplicate II*/

#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

#include <unordered_map>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i = 0; i < nums.size()-1;i++){
        //     int ele = nums[i];
        //     for(int j = i+1 ; j < nums.size(); j++){
        //         if(ele == nums[j]){
        //             if(abs(i - j)<=k){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;

        unordered_map<int, int> hashMap; 
        
        for (int i = 0; i < nums.size(); ++i) {
            if (hashMap.find(nums[i]) != hashMap.end()) {
                if (abs(i - hashMap[nums[i]]) <= k) {
                    return true;
                }
            }
            hashMap[nums[i]] = i;
        }
        return false;

    }
};