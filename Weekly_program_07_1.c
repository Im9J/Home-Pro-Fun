#include<stdio.h>
void fac(int *a)
{
    int total=1;
    for(int i=1;i<=*a;i++)
    {
        total=total*i;
    }
    *a=total;
}
int main()
{
    int a;
    scanf("%d",&a);
    fac(&a);
    printf("%d",a);
}
