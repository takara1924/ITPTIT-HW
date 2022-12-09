#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    int m = 1 + (n-1) * 2;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 1; j <= n+i; j++)
        {
            if(j == n-i || j == n+i)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = 1; i < n*2; i++)
    {
        if(i % 2 == 1)printf("*");
        else printf(" ");
    }
}