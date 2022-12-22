#include <stdio.h>
#include <string.h>

typedef long long ll;

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        
        char s[10005];
        scanf("\n");
        gets(s);

        // printf("%s\n", s);

        char x[] = " ";

        char *tokken = strtok(s, x);
        while(tokken != NULL)
        {
            int n = strlen(tokken);
            for(int i = 0; i < n; i++)
            {
                if(i == 0)
                {
                    if(tokken[i] < 'A' || tokken[i] > 'Z') tokken[i] -= 'a' -'A';
                }
                else
                {
                    if(tokken[i] < 'a' || tokken[i] > 'z') tokken[i] += 'a' -'A';
                }
                printf("%c", tokken[i]);
            }
            printf(" ");

            tokken = strtok(NULL, x);
        }
        printf("\n");
    }

}