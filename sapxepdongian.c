#include <stdio.h>
#include <math.h>
typedef long long ll;


int main()
{
    int n; scanf("%d", &n);
    int arr[n+1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < n; i++)
    {
        int k = i;
        for(int j = i-1; j >= 0; j--)
        {
            if(arr[k] <= arr[j])
            {
                int c = arr[k];
                arr[k] = arr[j];
                arr[j] = c;
                k = j;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}


