#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int n; scanf("%d", &n);

    int a[n][n];

    int d = 0, gt = 1;

    while(d <= n/2)
    {

        int k = n-d-1;
        for(int j = d; j < n-d; j++) a[d][j] = gt++;
        for(int i = d+1; i < n-d; i++) a[i][k] = gt++;
        for(int j = n-d-2; j >= d;j --) a[k][j] = gt++;
        for(int i = n-d-2; i >= d+1; i--) a[i][d] = gt++;
        d++;
    }

    // int k = n-d-1;
    // for(int j = d; j < n-d; j++) a[d][j] = gt++;
    //     for(int i = d+1; i < n-d; i++) a[i][k] = gt++;
    //     for(int j = n-d; j >= d;j --) a[k][j] = gt++;
    //     for(int i = n-d; i >= d+1; i--) a[i][d] = gt++;


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
