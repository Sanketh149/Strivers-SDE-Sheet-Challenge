int removeDuplicates(vector<int> &nums, int n) {
	// Write your code here.
	int len = 0;
	for(int i = 0;i<n;i++)
	{
		while(i+1<n and nums[i] == nums[i+1]) i++;
		swap(nums[len++], nums[i]);
	}
	return len;
}