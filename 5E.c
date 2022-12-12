#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

int main() 
{
    int n; scanf("%d", &n);

    int cc[n+10], ch[n+10];

    for(int i = 0; i < n; i++)
    {
        cc[i] = 0; ch[i] = 0;
    }

    int c,h;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int a; scanf("%d", &a);
            if(a == 1)
            {
                cc[j] = 1; ch[i] = 1;
            }
            if(a == 0)
            {
                h = i; c = j;
            }
        }
    }

    if(cc[c] == 0 && ch[h] == 0) printf("No");
    else printf("Yes");

}
