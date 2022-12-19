#include <stdio.h>
int isPerfectSquare(int n) 
{ 
    for (int i = 1; i * i <= n; i++) 
    { 
        if ((n % i == 0) && (n / i == i)) 
        { 
            return 1; 
        } 
    } 
    return 0; 
} 
int main() {
	int x,i,cnt=0,j=0,y,k,a[10000];
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
	    if(x%i==0)
	    {
	        a[j]=i;
	        j++;
	    }
	}
	for(i=0;i<j;i++)
	{
	    if((isPerfectSquare(a[i])==1)&&(a[i]!=0)&&(a[i]!=1))
	    {
	      y=a[i];
	      for(k=0;k<j;k++)
	      {
	        if(a[k]!=0 && a[k]%y==0)
	        a[k]=0;
	       }
	        a[i]=0;
	     }
	 }
	for(i=0;i<j;i++)
	if(a[i]!=0)
	cnt++;
	printf("%d",cnt-1);
	return 0;
}