#include <stdio.h>
#include <math.h>

typedef long long ll;
#define M 10000000

double cnt(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs( (x1*(y2-y3) + x2*(y3-y1) + x3 *(y1-y2))) / 2.0 ;
}


int main() 
{
    int x1,y1, x2,y2, x3, y3;
    int t; scanf("%d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &t);
    double a = cnt(x1,y1,x2,y2,x3,y3);
    while(t--)
    {
        int x, y; scanf("%d %d", &x, &y);
        double b = cnt(x1,y1,x2,y2,x,y);
        double c = cnt(x1,y1,x3,y3,x,y);
        double d = cnt(x2,y2,x3,y3,x,y);

        if(a == b+c+d) printf("YES\n");
        else printf("NO\n");
    }
    // printf("%lf", a);
}
