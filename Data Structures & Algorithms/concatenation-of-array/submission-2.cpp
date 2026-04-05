class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int size_arr = nums.size();
        std::vector<int> ans(2*size_arr);
        int i ;
        for(i=0;i<size_arr;i++)
        {
            ans[i]=nums[i];
            ans[i+size_arr]=nums[i];
        }
        return ans;
        
    }
};