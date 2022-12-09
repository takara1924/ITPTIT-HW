#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        ll a,x,b,y,n;

        scanf("%lld %lld %lld %lld %lld", &a, &x, &b, &y, &n);

        ll ans = 0;
        ll c = x*y;

        ll q = x, w=y;
        while(q != 0)
        {
            ll c = q;
            q = w % q;
            w = c;
        }
        
        c /= w;
        // printf("%lld\n", c);

        ll k = (c - c/x) * a + (c-c/y) * b;
        ans = (n / k) * c;
        n %= k;
        int i = 1;
        while(n > 0)
        {
            n -= (a + b);
            if(i % x == 0) n += a;
            if(i % y == 0) n += b;
            i++; ans++;
        }
        printf("%lld\n", ans);

    }

}


