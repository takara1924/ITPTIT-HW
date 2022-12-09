#include <stdio.h>
#include <math.h>
#define M 1000001
typedef long long ll;

int m[M];

int main()
{
    int n; scanf("%d", &n);
    
    int j = 1, ans = 1;

    for(int i = 1;i <= n; i++)
    {
      int a; scanf("%d", &a);
      if(m[a] >= j)
      {
        if((i - j ) > ans) ans = i - j ;
        // printf("%d %d\n", j, i);
        j = m[a] + 1;
      }
      m[a] = i;
    }
    if((n - j +1) > ans) ans = n - j + 1;
    // printf("%d", j);
    printf("%d ", ans);


}