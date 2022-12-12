#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000


int main() 
{
    int m,n; scanf("%d %d", &m, &n);
    int a[m+10][n+10];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i*n + j+1) % 6 == 0 || (i*n + j+1) % 8 == 0) a[i][j] = 1;
            else a[i][j] = 0;
        }
    }

    

    a[0][0] = 1; int b[m+6][n+6];
    int cnt = 0;

    // for(int i = 0; i < m; i++)
    //     {for(int j = 0; j < n; j++)
    //         printf("%d ", a[i][j]);
    //         printf("\n");
    //     }
    //     printf("\n\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
            if(a[i][j])
            {
                if(i > 0 )
                {
                    if(j > 0 && a[i-1][j-1])
                    {
                        b[i][j] = 0;
                    }
                    if(a[i-1][j])
                    {
                        b[i][j] = 0;
                    }
                    if(j < n-1 && a[i-1][j+1])
                    {
                        b[i][j] = 0;
                    }

                }

                if(i < m -1 )
                {
                    if(j > 0 && a[i+1][j-1])
                    {
                       b[i][j] = 0;
                    }
                    if(a[i+1][j])
                    {
                        b[i][j] = 0;
                    }
                    if(j < n-1 && a[i+1][j+1])
                    {
                        b[i][j] = 0;
                    }
                }

                    if(j > 0 && a[i][j-1])
                    {
                        b[i][j] = 0;
                    }
                    
                    if(j < n-1 && a[i][j+1])
                    {
                        b[i][j] = 0;
                    }

            }

            
        }
    }

    // printf("%d", cnt);

    // for(int i = 0; i < m; i++)
    //     {for(int j = 0; j < n; j++)
    //         printf("%d ", a[i][j]);
    //         printf("\n");
    //     }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            if(b[i][j]) cnt++;
    }

    printf("%d", cnt);

}
