#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ll  a; scanf("%lld", &a);
                printf("%lld ", a);
            }
        }
        printf("\n");
    }

}
