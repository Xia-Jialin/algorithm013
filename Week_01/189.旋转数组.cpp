/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

//输入：[1,2,3,4,5,6,7], 3
//全部反转：[7,6,5,4,3,2,1]
//左侧反转：[5,6,7,4,3,2,1]
//右侧反转：[5,6,7,1,2,3,4]

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        k %= length;
        reverse(&nums[0],&nums[length]);//反转全部元素
        reverse(&nums[0],&nums[k]);//反转左侧元素
        reverse(&nums[k],&nums[length]);//反转右侧元素
    }
};
// @lc code=end

