import java.util.*;

class Solution {
    public int smallestAbsent(int[] nums) {
        int sum = 0;
        for (int x : nums) sum += x;

        int n = nums.length;
        int avg = Math.max(sum / n + 1, 1);

        Set<Integer> set = new HashSet<>();
        for (int x : nums) {
            if (x >= avg) {
                set.add(x);
            }
        }

        while (set.contains(avg)) {
            avg++;
        }

        return avg;
    }
}