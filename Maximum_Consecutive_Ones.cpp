int longestSubSeg(vector<int> &nums , int n, int k){
    // Write your code here.
    int left = 0, right = 0, zeros = 0, maxi = 0;
    while(right < n)
    {
        if(nums[right] == 0)
            zeros++;
        while(zeros>k)
        {
            if(nums[left] == 0) zeros--;
            left++;
        }
        maxi = max(maxi, right - left + 1);
        right++;
    }
    return maxi;
}
