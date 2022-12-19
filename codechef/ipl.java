/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-- > 0) {
            String[] input = br.readLine().split(" ");
            int n = Integer.parseInt(input[0]);
            int k = Integer.parseInt(input[1]);
            input = br.readLine().split(" ");
            int[] arr = new int[n];
            for(int i = 0;i<n;i++) {
                arr[i] = Integer.parseInt(input[i]);
            }
            Arrays.sort(arr);
            if(n == 1) {
                System.out.println(-1);
                continue;
            }
            System.out.println(solve(arr, n, k, 0, 0, n-1, 0));
        }
	}
	 public static int solve(int[] arr , int n , int k , int mike , int tracy , int index , int count) {
        if(index == -1) {
            if(mike < k || tracy < k){
                return -1;
            }
            else {
                return count;
            }
        }
        
        if(mike >= k && tracy >= k) {
            return count;
        }

        int a = 0, b = 0;
        if(mike < k) {
            a = solve(arr, n, k, mike + arr[index], tracy, index-1, count+1);
        }
        if(tracy < k) {
            b = solve(arr, n, k, mike, tracy + arr[index], index - 1, count + 1);
        }
        if(a > 0) {
            if(b > 0) {
                return Math.min(a , b);
            } else {
                return a;
            }
        }
        else if(b > 0) {
            if(a > 0) {
                return Math.min(a, b);
            } else {
                return b;
            }
        }
        else {
            return -1;
        }
    }
}