#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int m,n; scanf("%d %d", &m, &n);

    int a[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    int cnt = 0;

    for(int i = 0; i < m; i++)
    {
        int check = 1;
        for(int j = 1; j < n; j++)
            if(a[i][j] != a[i][j-1])
            {
                check = 0; break;
            }
        if(check) cnt++;
    }

    for(int j = 0; j < n; j++)
    {
        int check = 1;
        for(int i = 1; i < m; i++)
            if(a[i][j] != a[i-1][j])
            {
                check = 0; break;
            }
        if(check) cnt++;
    }

    printf("%d", cnt);

}
