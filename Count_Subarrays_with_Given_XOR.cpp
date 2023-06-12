#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>mp;
    int cnt = 0;
    int xorr = 0;
    mp[0] = 1;
    for(auto it:arr)
    {
        xorr ^= it;
        if(mp.find(xorr^x) != mp.end()) cnt += mp[xorr^x];
        mp[xorr]++;
    }
    return cnt;
}