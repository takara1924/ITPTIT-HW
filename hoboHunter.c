#include <stdio.h>
#include <math.h>
typedef long long ll;

int main()
{
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    // a = (double)round((a*10)) / 10.0;
    // b = (double)round((b*10)) / 10.0;
    // c = (double)round((c*10)) / 10.0;   
    // d = (double)round((d*10)) / 10.0;

    float x = (a+b+c+d) / 4;
    
    x = round((x*10)) / 10.0;
    	
    printf("%.1f\n", x);

    if(x >= 3.6f)
    {
        printf("Xuat sac");
        return 0;
    }

    if(x >= 3.2f)
    {
        printf("Gioi"); return 0;
    }
    if(x >= 2.8f)
    {
        printf("Kha"); return 0;
    }
    printf("Tach mat roi'");


}