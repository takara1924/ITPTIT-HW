#include <stdio.h>
#include <string.h>

typedef long long ll;

int max(int a, int b)
{
    return a>b ? a : b;
}

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        char s1[10005], s2[10005]; 
        scanf("\n"); gets(s1);
        scanf("\n"); gets(s2);

        // printf("%s %s\n", s1, s2);

        int n1 = strlen(s1), n2 = strlen(s2);

        int t1[10005], t2[10005];

        if(n1 > n2)
        {
            for(int i = 0; i < n1; i++) t1[i] = s1[i] - '0';
            for(int i = 0; i < n1-n2; i++) t2[i] = 0;
            int j = 0;
            for(int i = n1-n2;i < n1; i++)
            {
                t2[i] = s2[j++] - '0';
            } 
        }

        if(n1 < n2)
        {
            for(int i = 0; i < n2; i++) t2[i] = s2[i] - '0';
            for(int i = 0; i < n2-n1; i++) t1[i] = 0;
            int j = 0;
            for(int i = n2-n1;i < n2; i++)
            {
                t1[i] = s1[j++] - '0';
            } 
        }

        if(n1 == n2)
        {
            for(int i = 0; i < n1; i++)
            {
                t1[i] = s1[i] - '0';
                t2[i] = s2[i] - '0';
            }
        }

        int n = max(n1, n2);
        int nho = 0;
        int ans[10005];
        for(int i = n-1; i>= 0; i--)
        {
            int k = t1[i] + t2[i] +nho;
            nho = k /10;
            k %= 10;
            ans[i] = k;
        }
        if(nho) printf("1");
        for(int i = 0; i < n; i++) printf("%d", ans[i]);
        printf("\n");
    }

}