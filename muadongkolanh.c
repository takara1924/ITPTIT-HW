#include <stdio.h>
#include <math.h>
typedef long long ll;

int main()
{
    double n; scanf("%lf", &n);

    double x = 1 - (1/(n+1));

    printf("%.2lf", x);

}