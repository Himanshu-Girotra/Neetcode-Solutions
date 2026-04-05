class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        int size_arr = nums.size();
        int i;
        for(i=0;i<size_arr;i++)
        {
            for(int j =i+1;j<size_arr;j++)
            {
            if(nums[i]==nums[j])
            return true;
            }
        }
        return false;
    }
};