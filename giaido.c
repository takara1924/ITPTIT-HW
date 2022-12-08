#include <stdio.h>
#include <math.h>
typedef long long ll;



int main()
{
    int t1,d1,p1,tr1,t2,d2,p2,tr2;
    scanf("%d%d%d%d%d%d%d%d", &t1, &d1, &p1, &tr1, &t2, &d2, &p2, &tr2);

    int cd = fmax(p1, p2) - fmin(t1, t2);
    int cr = fmax(tr1, tr2) - fmin(d1, d2);

    int x = fmax(cd, cr);

    int ans = x*x;

    printf("%d\n", ans);

    if(ans % 2 == 0) printf("hoa hong");
    else printf("go huong");

}