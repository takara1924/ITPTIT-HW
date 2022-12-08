#include <stdio.h>
#include <math.h>
typedef long long ll;



int main()
{
    ll n ; scanf("%lld", &n);
    ll s = n / 10 ;
    s *= 18; 

    int m = n % 10;

    if(m >= 1) s += 1;
    if(m >= 3) s += 3;
    if(m >=6) s+= 6;
    if(m >= 8) s += 8;

    printf("%lld", s);

}