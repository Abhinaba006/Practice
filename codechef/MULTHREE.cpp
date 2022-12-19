#include<stdio.h>

int main()  {
    int T;

    scanf("%d", &T);

    while (T--) {
        long long int d[7]={0}, sum=0; //possible mistake, this is an arbitrary number
        unsigned long long k, s, x;

        scanf("%llu %lld %lld", &k, &d[0], &d[1]);

        sum = (d[0]+d[1]);

        if(k==2){
            if(sum%3){
                printf("YES\n");
            }
            else
                printf("NO\n");
        }


        for (int i = 2; i <= 6; i++)    {
            d[i] = sum % 10;
            sum = sum + d[i];
        }

        s = (k-3)/4;
        x = (k-3)%4;
        sum = d[0] + d[1] + d[2] + (s * (d[3] + d[4] + d[5] + d[6]));

        switch (x)  {
        case 1:
            sum = sum + d[3];
            break;
        case 2:
            sum = sum + d[3] + d[4];
            break;
        case 3:
            sum = sum + d[3] + d[4] + d[5];
            break;
        default:
            break;
        }

        if (sum % 3 == 0)   {
            printf("YES\n");
        }

        else
            printf("NO\n");
    }
}