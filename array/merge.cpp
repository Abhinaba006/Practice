// have to merge two array without using extra space
// we have to go through the two arrays
// we will do it from the first for no reason
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int j=0;
	    for(int i=0;i<n; i++){
            int j=0;
            for(int j=1;j<m;j++){
                if(arr2[j]<arr1[i])
                {
                    // find the right pos
                    arr1[j]=arr1[j-1];
                }
            }
            // if the loop runner for a single time
            if(j!=1 || arr1[m-1]> arr2[i])
                swap(arr1[m-1], arr2[i]);
	    }
	}
};
