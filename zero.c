#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        int n; scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            int a; scanf("%d", &a);
            if(a < 0) printf("0 ");
            else printf("%d ", a);
        }
        printf("\n");

    }

}


