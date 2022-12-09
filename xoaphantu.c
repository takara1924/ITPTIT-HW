#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 10000

int main()
{
    int n; scanf("%d", &n);

    int arr[M];

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int k; scanf("%d", &k);

    int check = 1, j =0;
    int ans[M];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % k == 0 && check == 1)
        {
            check = 0;
        }
        else
        {
            ans[j] = arr[i];
            j++;
        }
    }
    if(check == 0)
    {
        for(int i = 0; i < n-1; i++) printf("%d ", ans[i]);
    }
    else printf("-1");

}


