#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

int add(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        char s[10005];
        scanf("\n"); gets(s);

        int n = strlen(s);

        char x[2] = " ";

        char*p = strtok(s, x);

        while(p != NULL)
        {
            int n = strlen(p);
            printf("%c", toupper(p[0]));
            for(int i = 1; i < n; i++) printf("%c", p[i]);
            p = strtok(NULL,x);
        }
        printf("\n");

    }

}