import java.util.*;

/*
 * @lc app=leetcode id=2423 lang=java
 *
 * [2423] Remove Letter To Equalize Frequency
 */

// @lc code=start

class Solution {
    public boolean equalFrequency(String word) {
        int[] arr = new int[26];
        for(char c:word.toCharArray()) ++arr[c-'a'];
        for(char c:word.toCharArray()) if(allEqual(arr, c-'a')) return true;
        return false;     

    }


    private boolean allEqual(int[] arr, int i) {
        arr[i]--;
        int k=0;

        for(int p=0;p<26;p++){
            if(arr[p]!=0){
                if(k==0) { k = arr[p];
                }
                else if(arr[p]!=k) { ++arr[i]; return false;};
            }
        }
        arr[i]++;
        return true;
    }
}   
// @lc code=end

