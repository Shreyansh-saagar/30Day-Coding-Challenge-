/* Leetcode 283 -> Move Zeros */

#include <vector>
#include <algorithm>
using namespace std;

#include <algorithm>

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // int zeroCount = count(nums.begin(), nums.end(), 0);
        // nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        // nums.insert(nums.end(), zeroCount, 0);

        int i, j;
        for (i = 0, j = 0; i < nums.size();)
        {
            if (nums[i] == 0)
                i++;
            else
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};