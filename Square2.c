#include<stdio.h>
int main()
{
    int a,b=0,c;
    scanf("%d",&a);
    while(b<a)
    {
    	c=0;
        while(c<a)
        {
            printf("*");
            c++;
        }
        printf("\n");
        b++;
    }
}
