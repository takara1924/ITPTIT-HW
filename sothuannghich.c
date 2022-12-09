#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        ll n; scanf("%lld", &n);
        ll a = n, b = 0;

        while(a)
        {
            // ll c = a % 10;
            b = b*10 + (a%10);
            a /= 10;
            // i *= 10;
        }
        // printf("%lld %lld\n", n, b);
        if(n == b) printf("YES\n");
        else printf("NO\n");

    }

}


