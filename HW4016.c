#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;


int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        char s[10005];
        scanf("\n"); gets(s);

        int n = strlen(s);

        int cnt [10000] = {};

        for(int i = 0; i < 10000; i++) cnt[i] = -1;

        int k = 9; int check = 1;

        for(int i = 0; i < n; i++)
        {
            int m = (int)s[i] ;
            if(cnt[m] < 0)
            {
                if(k < 0)
                {
                    check = 0; break;
                }
                else cnt[m] = k--;
            }
        }

        if(!check) printf("-1\n");
        else
        {
            for(int i = 0; i < n; i++) printf("%d", cnt[(int) s[i] ]);
        }
        printf("\n");

    }

}