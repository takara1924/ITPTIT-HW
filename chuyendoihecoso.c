#include <stdio.h>
#include <math.h>
typedef long long ll;
typedef unsigned long long ull;
#define M 2000

int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        ll n; scanf("%lld", &n);
        int arr[1000];
        int i = 0;

        while(n)
        {
            arr[i] = n % 2;
            n/= 2;
            i++;
        }
        i--;
        while(i >= 0)
        {
            printf("%d", arr[i]);
            i--;
        }
        printf("\n");


    }
}


