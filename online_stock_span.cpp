#include <bits/stdc++.h> 
#include<stack>
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    vector<int> result;
    int n = price.size();
    stack<pair<int,int>> s;
    for(int i = 0;i<n;i++){
        if(s.empty()){
            s.push({price[i], i});
            result.push_back(i+1);
            continue;
        }
        while(!s.empty()&&s.top().first <=price[i]){
            s.pop();
        }
        if(price[i]<s.top().first){
            int k = i - s.top().second;
            result.push_back(k);
            continue;
        }
    }
    return result;
}