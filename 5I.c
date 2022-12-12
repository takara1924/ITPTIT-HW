#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int m,n; scanf("%d %d", &m, &n);

    ll a[m+5][n+5] ;
    ll cnt[n+10];
    for(int i = 0; i < n; i++) cnt[i] = 0;
    
    for(int i = 0; i < m; i++)
        a[i][n] = 0;
    for(int j = 0; j < n; j++)
        a[m][j] = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) scanf("%lld", &a[i][j]);
    }


    for(int i = 0; i < m; i++)
    {
        ll sum = 0;
        for(int j = 0; j < n; j++)
        {
            printf("%lld ", a[i][j]);
            sum += a[i][j];
            cnt[j] += a[i][j]; 
        }
        printf("%lld\n", sum);
    }
    for(int i = 0; i < n; i++) printf("%lld ", cnt[i]);

}
