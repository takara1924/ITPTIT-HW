#include <stdio.h>
#include <string.h>

typedef long long ll;

int max(int a, int b)
{
    return a>b ? a : b;
}

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        char s[10005];
        scanf("\n"); gets(s);

        int n = strlen(s);
        int k = 1;

        int i = -1;
        while(i < n-1)
        {
            if(s[i+1] == 'I')
            {
                printf("%d", k);
                k++;
                i++;
            }
            else
            {
                int j = i;
                i++;
                while(i  < n && s[i] == 'D')
                {
                    i++;
                }
                i--;
                for(int l = k + i - j; l >= k; l--) printf("%d", l);
                k +=i-j+1;
                i++;
            }
        }
        if(s[n-1] == 'I') printf("%d", k);
        
    }

}