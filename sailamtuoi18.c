#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 1000000

int main()
{
	int a,b; scanf("%d %d", &a, &b);
	
	int n1 = 0,m1 = 0, n2 = 0, m2 = 0;
	
	int i = 1;
	while(a)
	{
		int d = a% 10;
		if(d == 5 || d == 6)
		{
			n1 = i*5 + n1;
			n2 += i * 6;
		}
		else
		{
			n1 += i*d;
			n2 += i*d;
		}
		i *= 10;
		a/= 10;
	}
	
	i = 1;
	while(b)
	{
		int d = b % 10;
		if(d == 5 || d == 6)
		{
			m1 = i*5 + m1;
			m2 += i * 6;
		}
		else
		{
			m1 += i*d;
			m2 += i*d;
		}
		i *= 10;
		b/= 10;
	}
	
	printf("%d %d", n1+m1, n2+m2);
	
}