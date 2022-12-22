#include <stdio.h>
#include <string.h>

typedef long long ll;

void swap(int *a, int *b)
{
    int c = *a; *a = *b; *b = c; 
}

int main()
{
    int x,y; scanf("%d %d", &x, &y);

    swap(&x, &y); printf("%d %d", x, y);

}