#include <stdio.h>
#include <math.h>
#define M 100000
typedef long long ll;

int main()
{
    ll arr[21] ={1}; 
    for(int i = 1; i <= 20; i++) arr[i] = arr[i-1] * i;

    int t; scanf("%d",&t);

    while(t--)
    {
        int a; scanf("%d", &a);

        printf("%lld\n", arr[a]);

    }

}