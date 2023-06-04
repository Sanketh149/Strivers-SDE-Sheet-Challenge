#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
        int idx = -1;
        for(int i = n-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1]) 
            {
                idx = i;
                break;
            }
        }
        if(idx == -1)
            sort(nums.begin(), nums.end());
        else
        {
            int curr = nums[idx];
            for(int i = n-1;i>idx;i--)
            {
                if(nums[i] > curr)
                {
                    swap(nums[i], nums[idx]);
                    break;
                }
            }
            sort(nums.begin()+idx+1, nums.end());
        }
        return nums;
}