#include <stdio.h>
#include <string.h>

typedef long long ll;

int main()
{
    int t; scanf("%d", &t);

    while(t--)
    {
        
        char s[10005]; 
        scanf("%s", s);
        int cnt[1000] = {};
        for(int i = 0; i < strlen(s); i++)
        {
            int a = (int)s[i];
            cnt[a]++;
        }

        int check = 0;

        int ck[1000] ={};

        for(int i = 0; i < strlen(s); i++)
        {
            int k = (int)s[i];
            if(cnt[k] > 1 && !ck[k])
            {
                ck[k] = 1;
                printf("%c %d\n", s[i], cnt[k]);
                check = 1;
            }
        }

        if(!check) printf("-1\n"); 


    }

}