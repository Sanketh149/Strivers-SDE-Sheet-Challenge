# include <bits/stdc++.h>

string longestCommonPrefix(vector<string> &arr, int n)

{

    string ans="";

    sort(arr.begin(), arr.end());

    string s=arr[0];

    string e=arr[n-1];

    for(int i=0; i<s.size(); i++){

        if(s[i]!=e[i]){

        break;

        }

        ans=ans+s[i];

    }

    return ans;

}

