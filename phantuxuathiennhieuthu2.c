#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 101
int m[M];


int main()
{
    int n; scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        m[arr[i]] ++;
    }

    int x1 = arr[0], x2 = arr[0], l1 = 0, l2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(m[arr[i]] > l1)
        {
            x2 = x1, l2 = l1, x1 = arr[i], l1 = m[arr[i]];
        }
        else if(m[arr[i]] > l2 && m[arr[i]] != l1)
        {
            x2 = arr[i], l2 = m[arr[i]];
        }
    }

    printf("%d", x2);

}


