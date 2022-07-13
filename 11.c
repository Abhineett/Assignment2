#include<stdio.h>
void main()
{
    int a[4]={2,3,4};
    int digit=9;
    for(int i=0;i<4;i++)
    {
        if(a[i]==0)
            a[i]=9;
        printf("%d",a[i]);
    }
}
