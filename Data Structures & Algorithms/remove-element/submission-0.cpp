class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i =0;
        int counter=0;
        for (i=0;i<nums.size();i++)
        {
            if(val==nums[i])
            {
                continue;

            }

            else
            {
                nums[counter] = nums[i];
                counter++;
            }
        }
        return counter;
    }
};