#include<stdio.h>
#include<stdlib.h>

int main()  {
    int t;
    scanf("%d", &t);

    while (t--) {
        int i = 0, n, c = 0;
        scanf("%d", &n);
        int a[n], b[n], suma = 0, sumb = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            suma = suma + a[i];
            // printf("%d %d", suma, a[i]);
        }

        for (int k = 0; k < n; k++) {
            scanf("%d", &b[k]);
            sumb = sumb + b[k];
            // printf("%d %d", sumb, b[k]);
        }

        if (suma == sumb)   {
            for (i = 0; i < n; i++) {

                if (a[i] == b[i]) break;

                else if (a[i] < b[i])   {
                    for (int j = 0; j < n; j++)    {
                        if (a[j] > b[j])    {
                            a[i]++;
                            a[j]--;
                            printf("%d %d", i, j);
                            c++;
                        }
                        if (a[i] < 0)   {
                            printf("-1");
                            return -1;
                        }
                        if (a[i]==b[i]) {
                            continue;
                        }
                    }
                }

                else   {
                    for (int j = 0; j < n; j++)    {
                        if (a[j] < b[j])    {
                            a[i]--;
                            a[j]++;
                            printf("%d %d", i, j);
                            c++;
                        }
                        if (a[i] < 0)   {
                            printf("-1");
                            return -1;
                        }
                        if (a[i]==b[i]) {
                            continue;
                        }
                    }
                }
            }
            printf("%d ", c);
        }

        else
            printf("-1");
    }
}
