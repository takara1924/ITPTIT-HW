#include <stdio.h>
#include <math.h>
typedef long long ll;



int main()
{
    ll n, x, y; scanf("%lld%lld%lld", &n, &x, &y);

    ll m,M;

    if( n - y >= x)
    {
        M = x;
    }    
    else M = n-y;

    m = (x <= y) ? 0 : x-y;

    printf("%lld %lld", m, M);


}