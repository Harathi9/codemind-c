#include<stdio.h>
int main()
{
    int n,i,d,c=0,e,np,pp,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            pp=j;
            d=n-pp;
            break;
        }
    }
    for(i=n;i<n+100;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            np=j;
            e=np-n;
            break;
        }
    }
    if(d<=e)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",e);
    }
}