#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int m,n;
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) scanf("%d", &b[i][j]);
    }

    for(int i = 0; i  < m; i++)
    {
        for(int j = 0; j < n; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
	
}
