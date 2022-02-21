
#include<stdio.h>
int main()
{
    int n,n1,sum=0,rem;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem =n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
