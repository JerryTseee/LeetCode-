//method 1: brute force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int length = sizeof(prices)/sizeof(prices[0]);
        int num = 0;
        
        for(int i = 0; i < length; ++i){
            for(int j = i; j < length; ++j){
                num = max(num, prices[j] - prices[i]);
            }
        }
        return num;
    }
};


//method 2: dynamic programming
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxValue = 0;
        int minPrice = INT_MAX;
        for(int price : prices){
            minPrice = min(minPrice, price);
            maxValue = max(maxValue, price - minPrice);
        }
        return maxValue;
    }
};