#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 1000000

int main()
{
	
	ll t; scanf("%lld", &t);
	
	int arr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	
	while(t--)
	{
		ll n; scanf("%lld", &n);
		int ans = 0;
		int i = 9;
		while(n)
		{
			ans += n/ arr[i];
			n %= arr[i];
			i--;
		}
		printf("%d\n", ans);
	}
}