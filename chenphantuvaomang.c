#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 2000

int main()
{
    int n; scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int x,p; scanf("%d %d", &x, &p);

    int ans[1000];

    int i = 0, j = 0;

    while(i < n)
    {
        if(j == p)
        {
            ans[j] = x;j++;
        }
        else 
        {
            ans[j] = arr[i];
            i++; j++;
        }
    }

    for(int i = 0; i <=n; i++) printf("%d ", ans[i]);

}


