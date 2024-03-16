class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int length = nums.size();
        std::unordered_map <int, int> mp;
        for(int i = 0; i < length ; i++)
        {
            mp[nums[i]] = i;
        }
        for(int i = 0; i < length ; i++)
        {
            int num = target - nums[i];
            if(mp[num] != i && mp[num] != 0)
            {
                result.push_back(i);
                result.push_back(mp[num]);
                break;
            }
        }
        
        return result;
    }
};