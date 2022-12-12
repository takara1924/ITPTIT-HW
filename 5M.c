#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int n,k;
        scanf("%d %d", &n, &k);

        int a[n+10][n+10];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);

        int n1 = 0, n0 = 0;

        for(int i = 0; i < n; i++)
        {
            int c1 = 0, c0 = 0;
            for(int j = 0; j < n; j++)
                {
                    if(a[i][j] == 1)
                    {
                        c1 ++; c0 = 0;
                    }
                    else
                    {
                        c1 = 0; c0++;
                    }

                    if(c1 == k) n1 = 1;
                    if(c0 == k) n0 = 1;
                }
        }

        for(int j = 0; j < n; j++)
        {
            int c1 = 0, c0 = 0;
            for(int i = 0; i < n; i++)
                {
                    if(a[i][j] == 1)
                    {
                        c1 ++; c0 = 0;
                    }
                    else
                    {
                        c1 = 0; c0++;
                    }

                    if(c1 == k) n1 = 1;
                    if(c0 == k) n0 = 1;
                }
        }

        if(n1 && n0) printf("Draw\n");
        else if(n1) printf("Game de\n");
        else if(n0) printf("Chap thoi\n");
        else printf("Draw\n");

    }

}
