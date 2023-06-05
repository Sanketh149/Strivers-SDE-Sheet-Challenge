#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long crntSum=0, maxSum = -1e9;
    for(int i=0; i<n; i++){
        crntSum+=arr[i];
        if(crntSum < 0){
            crntSum=0;
        }
    maxSum=max(maxSum, crntSum);
    }
    return maxSum;
}