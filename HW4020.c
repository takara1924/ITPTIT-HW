#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;


int main()
{


   
        int n; char s[10005]; scanf("%d\n%s", &n, s);

        int cnt = 0, cnt0 = 0;

        for(int i = 0; i < n; i++)
        
        {
            if(s[i] == '5' || s[i] == '0') cnt += i+1 - cnt0;
            if(s[i] == '0') cnt0++;
        }    

        printf("%d", cnt);

 
}