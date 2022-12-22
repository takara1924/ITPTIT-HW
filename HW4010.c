#include <stdio.h>
#include <string.h>

typedef long long ll;

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        int cnt[1000] ={};
        char s1[1005], s2[1005];
        scanf("\n%s\n%s", s1, s2);

        int n1 = strlen(s1);int n2 = strlen(s2);

        int k = 0;
        for(int i = 0; i < n1; i++)
        {
            int check = 1;
            for(int j = 0; j < n2; j++)
            {
                if(s1[i] == s2[j])
                {
                    check = 0; break;
                }
            }

            if(check && !cnt[ (int)s1[i] ])
            {
                cnt[ (int)s1[i] ] = 1;
                k = 1; printf("%c", s1[i]);
            }
        }


        for(int j = 0; j < n2; j++)
        {
            int check = 1;
            for(int i = 0; i < n1; i++)
            {
                if(s1[i] == s2[j])
                {
                    check = 0; break;
                }
            }

            if(check && !cnt[ (int)s2[j]])
            {
                cnt[ (int)s2[j]] = 1;
                k = 1; printf("%c", s2[j]);
            }
        }

        if(!k) printf("-1");
        printf("\n");
    }

}