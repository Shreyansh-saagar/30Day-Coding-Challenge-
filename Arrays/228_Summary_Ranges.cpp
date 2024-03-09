/* Leetcode 228 -> Summary Ranges */

#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    void Range(vector<string>& res,int start,int end){
        if(start != end){
            res.push_back(to_string(start)+ "->"+to_string(end));
        }else{
            res.push_back(to_string(start));
        }
    }

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0){
            return res;
        }

        int start = nums[0], end = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]+1){
                end = nums[i];
            }else{
                Range(res,start,end);
                start = nums[i];
                end = nums[i];
            }
        }
        Range(res,start,end);
        return res;
    }
};