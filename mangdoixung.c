#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        int n; scanf("%d", &n);

        int a[n];

        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        int check = 1;
        for(int i = 0; i < n/2; i++)
        {
            if(a[i] != a[n-1-i])
            {
                printf("0\n");check = 0;
                break;
            }
        }
        if(check) printf("1\n");
    }

}


