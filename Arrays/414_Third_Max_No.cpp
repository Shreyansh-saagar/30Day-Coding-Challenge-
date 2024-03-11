/* Leetcode 414 -> Third Maximum Number */

#include <vector>
#include <algorithm>
using namespace std;

#include <climits>

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {

        // METHOD 1
        /* long long firstMax = LLONG_MIN;
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > firstMax){
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[i];
            }else if(nums[i] > secondMax && nums[i] != firstMax){
                thirdMax = secondMax;
                secondMax = nums[i];
            }else if(nums[i] > thirdMax && nums[i] != secondMax && nums[i] != firstMax) {
                thirdMax = nums[i];
            }
        }
        return  (thirdMax == LLONG_MIN || thirdMax == secondMax) ? firstMax : thirdMax; */

        // METHOD 2
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        if (nums.size() < 3)
            return nums[nums.size() - 1];
        return nums[nums.size() - 3];
    }
};