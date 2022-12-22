#include <stdio.h>
#include <string.h>

typedef long long ll;

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        
        char s[10005];
        char c; int x;
        scanf("\n%s\n%c\n%d", s, &c, &x);

        for(int i = 0; i < strlen(s); i++)
        {
            if(i == x) printf("%c",c);
            printf("%c", s[i]);
        }
        printf("\n");

    }

}