#include<stdio.h>
int main()
{
    int n = 100;
    int *pn;
    printf("n = %d\n", n);
    pn = &n;
    *pn = 200;
    printf("n = %d\n", n);
    n = 2 * (*pn);
    printf("*pn = %d\n", *pn);
    printf("n = %d\n", n);

    return 0;
}