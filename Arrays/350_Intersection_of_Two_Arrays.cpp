/* Leetcode 350 -> Intersection of two array II */

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> newarr;

        // METHOD 1
        // for(int i = 0; i < nums1.size(); ++i){
        //     for(int j = 0; j < nums2.size(); j++){
        //         if(nums1[i] == nums2[j]){
        //             newarr.push_back(nums1[i]);
        //             nums2.erase(nums2.begin() + j);
        //             break;
        //         }
        //     }
        // }

        // METHOD 2
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                newarr.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return newarr;
    }
};