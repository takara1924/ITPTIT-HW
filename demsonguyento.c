#include <stdio.h>
#include <math.h>
#define M 100000
typedef long long ll;

int main()
{
    int arr[M] = {1,1};

    for(int i = 2; i < M; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = 2; i*j < M; j++)
            {
                arr[i*j] = 1;
            }
        }
    }

    int t; scanf("%d", &t);

    while(t--)
    {
        int cnt = 0;
        int a,b; scanf("%d %d", &a, &b);
        for(int i = a; i <= b; i++)
        {
            if(arr[i] == 0) cnt++;
        }
        printf("%d\n", cnt);
    }

}