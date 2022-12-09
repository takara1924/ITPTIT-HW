#include <stdio.h>

int p[1000000], M = 1000000;

int main()
{

    p[0]=p[1]= 1;

    for(int i = 2; i * i <= M; i++)
    {
        if(!p[i])
        {
            for(int j = i * 2; j < M; j += i) p[j] = 1;
        }
    }

    int t; scanf("%n", &t);

    while(t--)
    {
        int n; scanf("%d", &n);
        if(!p[n]) printf("%d ", n);
    }
}


