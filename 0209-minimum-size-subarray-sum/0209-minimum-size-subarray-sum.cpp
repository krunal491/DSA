class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0,len = 0,low = 0,high = 0,res = INT_MAX,n = nums.size();
        while(high<n){
            sum = sum + nums[high];
            while(sum>=target){
                len = high - low + 1;
                res = min(len,res);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        return res == INT_MAX ? 0 : res;
    }
};