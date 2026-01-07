/*
 * @lc app=leetcode id=925 lang=java
 *
 * [925] Long Pressed Name
 */

// @lc code=start
class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int i=0, j=0, m=name.length(), n=typed.length();
        if(m>n) return false;
        while(i<m && j<n){
            if(name.charAt(i)==typed.charAt(j)) { i++; j++;}
            else if(j>0 && typed.charAt(j-1)==typed.charAt(j)) j++;
            else return false;
        }
        if(i<m) return false;
        while(j<n) if(typed.charAt(j-1)==typed.charAt(j)) j++; else return false;
        return true;
    }
}
// @lc code=end

