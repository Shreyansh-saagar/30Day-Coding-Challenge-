/* Leetcode 121 -> Best time to buy and sell books*/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;


class Solution {
public:
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int price: prices){
        minPrice = min(minPrice,price);

        int profit = price - minPrice;

        maxProfit = max(maxProfit,profit);
    }
    return maxProfit;
}
};