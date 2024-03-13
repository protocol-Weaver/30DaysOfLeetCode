class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i = 0; i< len -1; i++)
        {
            if(nums[i] + 1 != nums[i + 1] )
            {
                return nums[i + 1] - 1;
            }
        }
        if(nums[len - 1] != len)
        {
            return len;
        }
        return 0;
    }
};