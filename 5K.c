#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int m,n; scanf("%d %d", &m, &n);

    int a[m+5][n+5];

    for(int i = 0; i <= m; i++)
        for(int j = 0; j <= n; j++) a[i][j] = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    int ans = 0;

    for(int j = 0; j < n; j++)
    {
        int cnt = 0;
        for(int i = 0; i < m; i++)
        {
            if(a[i][j] == 1) cnt++;
        }
        if(cnt > floor(m/2)) ans++;
    }

    printf("%d", ans);

}
