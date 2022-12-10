#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 1000000

int main()
{
	ll n; scanf("%lld", &n);
	
	for(int i = 1; i <= 2*n+1; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}