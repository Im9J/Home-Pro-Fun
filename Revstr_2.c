#include<stdio.h>
#include<string.h>
int main()
{
    int n,j,k;
    char a[10000],rev[10000];
    scanf("%s",&a);
    j=0;
    k=strlen(a);
    for(n=k-1;n>=0;n--)
        rev[j++]=a[n];
    rev[n]='\0';
    printf("%s",rev);
    return 0;
}
