/* Leetcode 448 -> Find all missing number */

#include <vector>
#include <algorithm>
using namespace std;

#include <algorithm>

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> newarr;
        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] != i + 1 && nums[i] != nums[nums[i] - 1])
            {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != (i + 1))
            {
                newarr.push_back(i + 1);
            }
        }
        return newarr;
    }
};