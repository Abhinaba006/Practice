#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5, i, j, lim;
    scanf("%d", &n);
    n = 2*n-1;
    lim = n/2;
    for(i=0;i<=lim;i++){
        for(j=-lim;j<=lim;j++){
            if(abs(j)<=i)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    for(i=0;i<lim/2;i++){
        for(j=0;j<n-1;j++){
            if(j>0){
                printf(" * ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    for(i=0;i<lim/2;i++){
        for(j=0;j<n-1;j++){
            if(j>0 && j != lim){
                printf(" * ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    for(i=0;i<lim/2;i++){
        for(j=0;j<n;j++){
        printf(" * ");
        }
        printf("\n");
    }

}
