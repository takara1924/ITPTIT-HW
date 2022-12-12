#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int n; scanf("%d", &n);

    ll a[n+10][n+10], b[n+10][n+10];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) scanf("%lld",&a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) scanf("%lld",&b[i][j]);

    ll c[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = 0;

            for(int l = 0; l < n; l++) c[i][j] += a[i][l] * b[l][j]; 
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
}
