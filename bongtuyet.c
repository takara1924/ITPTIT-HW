#include <stdio.h>
#include <math.h>

typedef long long ll;
#define MAX 1000000000000;


int main()
{
  double n,r;
  scanf("%lf %lf", &n, &r);
  double a1 = (2 *3.14)/n, a2 = a1/2 ;

  double ans = r * r * tan(a1/2) * tan(a2/2) /( tan(a1/2) + tan(a2/2) );

  ans *= n;

  printf("%.12lf", ans); 

}