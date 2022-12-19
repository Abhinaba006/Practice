#include<stdio.h>
int main()
{
    int a=10;
    void f();
    a=f();
    printf("\n%d", a);
}
void f()
{
    printf("\nHi");
    return 1;
}

