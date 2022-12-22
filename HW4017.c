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
        scanf("\n");
        gets(s);

        char x[2] = " ";
        int cnt = 0;
        char *p = strtok(s, x);
        
        while(p != NULL)
        {
            cnt++;
            p = strtok(NULL, x);
        }

        printf("%d\n", cnt);

    }

}