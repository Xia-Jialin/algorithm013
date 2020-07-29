/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();

        //元素总数小于2的直接返回
        if (length < 2){
            return length;
        }

        int num = 0;
        for (int i = 1; i < length; i++) {
            if (nums[num] != nums[i]){
                nums[++num] = nums[i];
            }
        }
        return num + 1;
    }
};
// @lc code=end

