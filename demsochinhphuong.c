#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 2000

int main()
{
    int t; scanf("%d", &t);
    

    while(t--)
    {
        ll a, b; scanf("%lld %lld", &a, &b);

        if(a > b)
        {
            ll c = a; a = b; b = c;
        }

        ll c = ceil(sqrt(a)), d = floor(sqrt(b));

        ll ans = d -c + 1;

        if(ans < 0) ans = 0;

        printf("%lld\n", ans);


    }

}


