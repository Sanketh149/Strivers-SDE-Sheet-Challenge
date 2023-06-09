#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int target){
   // Write your code here.
   map<int,int>mp;
   vector<vector<int>>res;
   for(int i = 0;i<arr.size();i++)
   {
      if(mp.find(target - arr[i]) != mp.end())
      {
         int cnt = mp[target-arr[i]];
         while(cnt--)
         {
            vector<int>output;
            output.push_back(min(arr[i],target-arr[i]));
            output.push_back(max(arr[i],target-arr[i]));
            res.push_back(output);
         }
      }
      mp[arr[i]]++;
   }
   sort(res.begin(), res.end());
   return res;
}