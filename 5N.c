#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int m,n; scanf("%d %d", &m, &n);

    int cnt[101]= {};

    int max = 0, k = 0, a;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a);
            cnt[a] ++;
            if(cnt[a] > max || (cnt[a] == max && k < a))
            {
                max = cnt[a]; k = a;
            }
        }

    printf("%d %d", max, k);

}
