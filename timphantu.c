#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 2000

int main()
{
    int a[110], b[110],res[101], ans[101];

    int n1, n2;
    scanf("%d", &n1);
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        res[i] = a[i];
    }
    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);

    int check = 1;

    for(int i = 0; i < n1; i++)
    {
        int k = 1;
        for(int j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                k = 0;
                break;
            }
        }

        if(k == 1)
        {
            printf("%d ", a[i]);
            check = 0;
        }
    }
    if(check == 1) printf("-1");


}


