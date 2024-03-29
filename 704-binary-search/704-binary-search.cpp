class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int16_t left = 0;
        int16_t right = nums.size() - 1;
        
       while(left <= right){
            
            int16_t m = left + (right - left) / 2;
            
            if(nums[m] == target){
                return m;
            }
            else if(nums[m] > target){
                right = m - 1;
                nums.erase(nums.begin() + m + 1, nums.end());
            } 
            else{
                left = m + 1;
            }
        }
        return -1;
    }
};