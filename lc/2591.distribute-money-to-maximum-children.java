/*
 * @lc app=leetcode id=2591 lang=java
 *
 * [2591] Distribute Money to Maximum Children
 */

// @lc code=start
class Solution {
    public int distMoney(int money, int children) {
        int ans=0;
        if(money<children) return -1;
        money -= children;
        for(int i=0;i<children;i++){
            if(money>=7){
                money-= 7;
                ans++;
            }else {
                if(money == 3 && i==children-1) ans--;
                money = 0;
            } 
        }
        if(money == 0) return ans;
        else return ans-1;
    }
}
// @lc code=end

