#include<stdio.h>
#include<string.h>
void solve(char a[], char b[]){
    int n = strlen(a);
    int m = strlen(b);
    int i;
    int min = n<m?m:m;
    for(i=0;i<min;i++){
        printf("%c", a[i]);
        printf("%c", b[i]);
    }
    if(n>m){
        for(i=min;i<n;i++)
            printf("%c", a[i]);
    }
    else{
        for(i=min;i<m;i++)
            printf("%c", b[i]);
    }
}
int main(){
    solve("pqrs", "abcdef");
}