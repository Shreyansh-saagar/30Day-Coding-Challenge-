/* Leetcode 349 -> Intersection of two array */

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        // Method 1 :
        vector<int> newarr;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    if (find(newarr.begin(), newarr.end(), nums1[i]) == newarr.end())
                    {
                        newarr.push_back(nums1[i]);
                    }
                }
            }
        }
        return newarr;
    }
};