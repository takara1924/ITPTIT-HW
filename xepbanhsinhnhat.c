#include <stdio.h>
#include <math.h>
typedef long long ll;



int main()
{
    ll x; scanf("%lld", &x);
    if(x == 1)
    {
        printf("2"); return 0;
    }
    ll n = ceil( sqrt(2.0*x + 0.25) - 0.5 );
    


    ll k = n*(n+1)/2;
    if(x == k) printf("%lld", n);
    else
    {
        printf("%lld", k - x);
    }

}