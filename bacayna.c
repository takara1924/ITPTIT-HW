#include <stdio.h>



int main()
{
    int a, b , c;
    char ch; scanf("%d %d %d %c", &a, &b, &c, &ch);

    int na, nb, nc;

    int nd, n;
    int d ;
    int i; 

    d = a; i = 1; na = 0;

    if(d)
    {
        int m = d % 2;
        na += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        na += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        na += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        na += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        na += m * i;
        d /= 2;
        i *= 10;
    }

    d = b; i = 1; nb = 0;

    if(d)
    {
        int m = d % 2;
        nb += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nb += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nb += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nb += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nb += m * i;
        d /= 2;
        i *= 10;
    }

    d = c; i = 1; nc = 0;

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    n = nb + nc;

    nd = 0, i = 1;

    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }


    if(na > nd)
    {
        printf("Alex"); return 0;
    }

    d = c; i = 1; nc = 0;

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    n = na + nb;

    nd = 0, i = 1;

    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
    if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }

    if(nc > nd)
    {
        printf("Alex"); return 0;
    }

    d = c; i = 1; nc = 0;

    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }
    if(d)
    {
        int m = d % 2;
        nc += m * i;
        d /= 2;
        i *= 10;
    }

    n = na + nc;

    nd = 0, i = 1;

     if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
     if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
     if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }
     if(n)
    {
        int k = n % 10;
        if(k == 2) k = 0;
        nd = i*k + nd;
        i *= 10;
        n /= 10;
    }

    if(nb > nd)
    {
        printf("Alex"); return 0;
    }



    printf("%c", ch);

}