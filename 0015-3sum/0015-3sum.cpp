class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0; i < length; i++)
        {   
            if(i > 0 && i < length && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = length - 1;
            int target = -nums[i];
            while(left < right)
            {
                while(right > left && nums[left] + nums[right] < target)
                    ++left;
                
                while(right > left && nums[left] + nums[right] > target)
                    --right;

                if(nums[left] + nums[right] == target && left < right  && i != left && i != right)
                {
                    result.push_back({nums[i],nums[left], nums[right]});
                }
                ++left;
                while(left < right && nums[left] == nums[left - 1])
                    ++left;
            }
        }
        return result;
    }
};