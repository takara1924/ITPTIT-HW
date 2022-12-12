#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int n; scanf("%d", &n);

    int a[n][n], b[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) scanf("%d",&a[i][j]);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[j][n-i-1] = a[i][j];
        }
    }
	

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) printf("%d ",b[i][j]);
        printf("\n");
    }
}
