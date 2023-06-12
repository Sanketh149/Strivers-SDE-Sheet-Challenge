#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    int n = s.size();
    vector<int>res(256,-1);
    int begin = -1,maxi=0;
    for(int i=0;i<n;i++)
    {
        if(res[s[i]]>begin)
            begin = res[s[i]];
        res[s[i]] = i;
        maxi = max(maxi,i-begin);
    }
    return maxi;
}