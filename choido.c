#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 1000000

ll cnt(ll n, ll m, ll p)
{
	if(m == 1)
	{
		if(p <= n) return 1;
		return 0;
	}
	if( p == 0) return 1;
	
	
	ll ans = 0;
	
	for(ll i = 0; i <= n; i++)
	{
		if(i > p) break;
		ans += cnt(n, m-1, p - i);
	}
	return ans;
}

int main()
{
	ll n, m, p;
	scanf("%lld %lld %lld", &n, &m, &p);
	
	if(p <= 0) printf("0");
	else
		printf("%lld", cnt(n, m, p));
	
}