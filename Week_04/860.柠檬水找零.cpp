/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int tenSpot = 0;
        int twentyDollars = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five++;
                continue;
            }
            if (bills[i] == 10) {
                tenSpot++;
                if (five <= 0) {
                    return false;
                }
                five--;
                continue;
            }
            if (bills[i] == 20) {
                twentyDollars++;
                if (five > 0 && tenSpot > 0) {
                    tenSpot--;
                    five--;
                } else if (five > 3) {
                    five -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

