#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=9, i, j, k;
    int m = n/2;
    k = n-1+((n-1)/2);
    for(i=-m;i<=m;i++){
        for(j=-m;j<=m;j++){
            printf(" %d ", abs(i)+abs(j));
        }
        printf("\n");
    }
}
