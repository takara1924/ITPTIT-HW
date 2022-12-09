#include <stdio.h>
#include <math.h>
#define M 100000
typedef long long ll;

int main()
{
    int t; scanf("%d", &t);
    int arr[M];
    while(t--)
    {
        int n; scanf("%d", &n);

        int i = 0;

        for(int j = 1; j <= n/2; j++)
        {
            if(n % j == 0)
            {
                arr[i] = j; i++;
            }
        }
        arr[i] = n; i++;

        printf("%d\n", i);
        for(int j = 0; j < i; j++)
        {
            printf("%d ",arr[j]);
        }
        printf("\n");
    }

}