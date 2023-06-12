#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > nums) {

  // Write your code here
  map<int,int>mp;
  int sum = 0;
  int maxi = 0;
  for(int i = 0;i<nums.size();i++)
  {
      sum += nums[i];
      if(sum == 0) maxi = i+1;
      else {
        if (mp.find(sum) != mp.end())
          maxi = max(maxi, abs(i - mp[sum]));
        else
          mp[sum] = i;
      }
  }
  return maxi;

}