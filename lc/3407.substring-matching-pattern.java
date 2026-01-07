/*
 * @lc app=leetcode id=3407 lang=java
 *
 * [3407] Substring Matching Pattern
 */

// @lc code=start
class Solution {
    public boolean hasMatch(String s, String p) {
        int star = p.indexOf('*');
        String prefix = p.substring(0, star), suffix = p.substring(star+1);
        if(!s.contains(prefix)) return false;
        int idx = s.indexOf(prefix);
        String t = s.substring(idx+prefix.length());
        if(!t.contains(suffix)) return false;

        return true;
    }
}
// @lc code=end

