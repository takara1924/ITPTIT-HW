#include <stdio.h>
#include <math.h>
typedef long long ll;



int main()
{
    int xA,yA,xB,yB,xC,yC;
    scanf("%d %d %d %d %d %d",&xA,&yA,&xB,&yB,&xC,&yC);
    double AB=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
    double AC=sqrt(pow(xC-xA,2)+pow(yC-yA,2));
    double BC=sqrt(pow(xC-xB,2)+pow(yC-yB,2));

    double k = fmax(AB, fmax(AC, BC));

    if(k == BC) 
        printf("%d %d",xB+xC-xA,yB+yC-yA);
    else if(k==AB)
        printf("%d %d",xA+xB-xC,yA+yB-yC); 
    else
        printf("%d %d",xA+xC-xB,yA+yC-yB);

}