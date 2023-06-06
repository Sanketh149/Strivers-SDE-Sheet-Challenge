#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>nonOverLap;
        nonOverLap.push_back(intervals[0]);
        for(int i = 1;i<intervals.size();i++)
        {
            vector<int> &recent = nonOverLap.back();
            if(intervals[i][0] <= recent[1]) //need to merge
                recent[1] = max(recent[1], intervals[i][1]);
            else
                nonOverLap.emplace_back(intervals[i]);
        }
        return nonOverLap;
}
