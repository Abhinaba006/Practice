#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=9, i, j;
    n = n/2;
    for(i=-n;i<=n;i++){
        for(j=-n;j<=n;j++){
                //printf(" %d ", abs(i)+abs(j));
            if(i==0)
                printf("*");
            else if((j>=0 && abs(i)+abs(j)==n))
                printf("*");
            else printf(" ");
            }
        printf("     ");
        for(j=-n;j<=n;j++){
                //printf(" %d ", abs(i)+abs(j));
            if(i==0)
                printf("*");
            else if((j<=0 && abs(i)+abs(j)==n))
                printf("*");
            else printf(" ");
            }
            printf("\n");
        }
    }
