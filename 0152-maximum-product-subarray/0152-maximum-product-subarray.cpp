class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int max_ending = nums[0];
 
        int min_ending = nums[0];
        int max_so_far = nums[0];
        for(int i = 1; i < len ; i++)
        {
            int temp = max({ nums[i], nums[i] * max_ending,
            nums[i] * min_ending});

            min_ending = min({ nums[i], nums[i] * max_ending,
            nums[i] * min_ending});
            
            max_ending = temp;
            max_so_far = max(max_ending, max_so_far);
        }
        return max_so_far;
    }
};