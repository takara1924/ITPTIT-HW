#include <stdio.h>
#include <string.h>

typedef long long ll;

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        
        char s[10005];
        scanf("\n%s", &s);

        int cnt = 1;

        for(int i = 1; i < strlen(s); i++)
        {
            if(s[i] != s[i-1])
            {
                if(cnt != 1) printf("%c%d", s[i-1], cnt);
                else printf("%c", s[i-1]);
                cnt = 0;
            }
            cnt++;
        }
        if(cnt != 1) printf("%c%d", s[strlen(s)-1], cnt);
        else printf("%c", s[strlen(s)-1]);
        printf("\n");

    }

}