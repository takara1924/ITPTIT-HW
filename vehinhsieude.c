#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 1000000

int main()
{
	
	int n;scanf("%d", &n);
	
	int arr[30];
	
	for(int i = 0; i < n; i++)
	{
		arr[i] = n-i-1;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = n-1; j > n-i-1; j-- ) arr[j]++;
		for(int i = 0; i < n; i++) printf("%c", 'a' + arr[i]);
		
		printf("\n");
	}
	
//	for(int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
	
}