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

        int k;
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == ' ')
            {
                k = i+1;
                break;
            }
        }

        for(int i = k; i < n; i++) printf("%c", tolower(s[i]));

        char td[10];
        int cnt = 0;

        char x[2] = " ";

        char *stoken = strtok(s, x);

        while(stoken != NULL)
        {
            td[cnt++] = stoken[0];

            stoken = strtok(NULL, x);
        }

        for(int i = 0; i < cnt-1; i++) printf("%c", tolower(td[i]));

        printf("@itptit.edu.vn\n");

    }

}