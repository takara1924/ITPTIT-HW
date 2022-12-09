#include <stdio.h>
#include <math.h>
typedef long long ll;
#define M 2000

int main()
{
    int t; scanf("%d", &t);
    

    while(t--)
    {
        double a, b , c; scanf("%lf %lf %lf", &a, &b, &c);
        printf("%g\n", a *b *c / 100.0);

    }

}


