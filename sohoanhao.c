#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 2000

int main()
{
    int t; scanf("%d", &t);
    int arr[M];
    int p[M];
    int n = 0;

    for(int i = 2; i < M; i++)
    {
        if(arr[i] == 0)
        {
            p[n] = i; n++;

            for(int j = 2; i*j < M; j++)
                arr[i*j] = 1;
            
        }
    }


    while(t--)
    {
        ll a; scanf("%lld", &a);

        if(a % 2 == 1)
        {
            printf("NO\n"); continue;
        }
        
        int check = 0;
        for(int i = 0; i < M; i++)
        {
            ll k = (ll)pow(2, p[i]-1) * ((ll)pow(2, p[i]) - 1);
            if(a == k)
            {
                check = 1;
                break;
            }
            if(a < k) break;
        }

        if(check == 0) printf("NO\n");
        else printf("YES\n");

    }

}


