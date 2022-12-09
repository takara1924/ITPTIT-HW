#include <stdio.h>
#include <math.h>
typedef long long ll;
typedef unsigned long long ull;
#define M 1000000

int n = 0; int snt[M+5] ={}, a[M+5] = {};


void ssnt()
{
    for(int i = 2; i*i  <= M; i++)
    {
        if(a[i] == 0)
        {
            // snt[n] = i; n++;
            for(ll j = i * i; j <= M; j += i) a[j] = 1;
        }
    }
}

void tsnt()
{
    for(int i = 2; i < M; i++)
    {
        if(!a[i]) snt[n++] = i;
    }
}

ll binary(ll x)
{
    // ll ans = 0;
    int i = 1;
    for(; i < 13; i++)
    {
        if(snt[i] > x) break;
    }

    return i-1;
    
}

ll func(ll a)
{
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        if((ll)pow(snt[i], 2) > a) break; 
        ll x = (int)(log(a)/log(snt[i]));
        ans += binary(x+1);
    }

    return ans;
}


int main()
{
    ssnt(); tsnt();

    // ll t; scanf("%lld", &t);
    // while(t--)
    // {
    //     ll l, r;
    //     scanf("%lld %lld", &l, &r);

    //     printf("%lld\n", func(r) - func(l-1));
    // }

    printf("%d", n);
}


