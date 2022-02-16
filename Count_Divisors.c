#include<stdio.h>
int main()
{
    int i,j,k,r,count=0;
    scanf("%d%d%d",&j,&r,&k);
    for(i=j;i<=r;i++)
    {
        if(i%k==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}