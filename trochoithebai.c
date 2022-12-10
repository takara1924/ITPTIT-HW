#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10005

int main()
{
	int t; scanf("%d", &t);
	
	while(t--)
	{
		int arr[M] ={};
		
//		for(int i = 0; i < M; i++) printf("%d ", arr[i]);
		int n; scanf("%d", &n);
		int max = 0, check = 0;
		
		for(int i = 1; i <= n; i++)
		{
			int a; scanf("%d", &a);
			arr[a] ++;
			max = fmax(max, a);
		}
		
		
		for(int i = max; i >= 1; i--)
		{
			if(arr[i] % 2 == 1)
			{
				check = 1; break;
			}
		}
		
		(check) ? printf("Game la de\n") : printf("Chap thoi\n");
		
	}
}