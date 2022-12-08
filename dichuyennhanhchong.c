#include <stdio.h>
#include <math.h>
typedef long long ll;

int main()
{
    int s, x1, x2, t1, t2, c, d;
    scanf("%d %d %d %d %d %d %d", &s, &x1, &x2, &t1, &t2, &c, &d);

    int tn = (int)abs(x1 - x2) * t2;
    int k = 0;

    
        if(d == 1)
        {
            if(c >= x2)
            {
                k += (s-c) +(s-x2);
                if(x2 >= x1) k += 2 * x2;
            }
            else
            {
                k += x2 - c;
                if(x1 > x2) k += 2 *(s - x2);
                if(x1 < c) k += 2 *(s - x2) + 2 * x2;
            }
        }
        else
        {
            if(x2 >= c)
            {
                k += c + x2;
                if(x1 > x2) k += 2 * (s - x2);
               
            }
            else
            {
                k += (c - x2);
                if(x1 < x2) k += 2 *x2;
                if(x1 > c) k += 2 *x2 + 2 * (s - x2);
            }
        }
    

    int tt = k * t1;

    printf("%d", (int)fmin(tt, tn));

}