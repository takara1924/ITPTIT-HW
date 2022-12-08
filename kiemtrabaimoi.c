#include <stdio.h>
#include <math.h>
typedef long long ll;



int main()
{
    ll m, k, a, b;
    scanf("%lld %lld", &m, &k);

    ll ans = 0;
    int n;

    n = 6, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans += (b-a)/n + 1;

    n = 8, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans += (b-a)/n + 1;

    n = 10, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans += (b-a) / n + 1;

    n = 24, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans -= (b-a) / n + 1;

    n = 40, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans -= (b-a) / n + 1;

    n = 30, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans -= (b-a) / n + 1;

    n = 120, a = fmin(m, k), b = fmax(m, k);

    if(a % n != 0)
    {
        a += (n - (a%n));
    }
    if(b % n != 0) b -= (b % n);

    if(a <= b) ans += (b-a) / n + 1;

    printf("%lld", ans);

}