#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int n; scanf("%d", &n);
    int arr[1000];

    for(int i = 0; i < n; i++)
    {
        if(i== 0)
        {
            for(int j = 0; j < 2*n -1; j++)
            {
                arr[j] = n;
                printf("%d", n);
            }
        }
        else
        {
            for(int j = 0; j < 2*n -1; j++)
            {
                if(j >= i && j < 2 *n -1 - i)
                {
                    arr[j]--;
                }
                printf("%d", arr[j]);
            }
        }


        printf("\n");
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < 2*n - 1; j++)
        {
            if(j >= n -1 -i && j <= n-1 + i) arr[j] ++;
            printf("%d", arr[j]);
        }
        printf("\n");
    }

}


