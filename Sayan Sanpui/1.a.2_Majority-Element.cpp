// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int major_element = nums[0];
        for (int i=0; i<nums.size(); i++) {
            if (major_element == nums[i])
                count++;
            else
                count--;
            if (count<0) {
                major_element = nums[i];
                count = 1;
            }
        }
        return major_element;
    }
};