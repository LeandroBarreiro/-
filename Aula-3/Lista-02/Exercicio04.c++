#include<stdio.h>
int main()
{
    int x, *p;
    x = 10;
    p = &x;
    *p = x + 20;
    printf("%d", *p);
}