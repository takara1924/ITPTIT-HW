#include <stdio.h>
#include <string.h>

typedef long long ll;

char* add(char c[1005], char s[1005])
{
    strcat(c, s);
    return c;
}

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        char s[10005];
        char c;
        scanf("\n"); gets(s);
        scanf("%c", &c);

        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] != c) printf("%c", s[i]);
        }
        printf("\n");

    }

}