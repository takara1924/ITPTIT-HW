#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        ll a, b; scanf("%lld %lld", &a, &b);

        ll c = a*b;

        while(a != 0)
        {
            ll c = a;
            a = b % a;
            b = c;
        }
        printf("%lld\n", c / b);

    }

}


