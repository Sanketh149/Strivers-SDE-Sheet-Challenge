#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini = prices[0];
    int res = 0;
    for(int i = 0;i<prices.size();i++)
    {
        mini = min(mini, prices[i]);
        res = max(res, prices[i] - mini);
    }
    return res;
}