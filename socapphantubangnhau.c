#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        int n; scanf("%d", &n);


        int cnt = 0;

        for(int i = 0;i < n; i++)
        {
            int a; scanf("%d", &a);
            if((int) sqrt(a) * (int) sqrt(a) == a) cnt++;
        }

        printf("%d\n", cnt);
    }

}


