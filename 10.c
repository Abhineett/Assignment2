#include<stdio.h>
void main()
{

    int a[4]={2,3,4,5};
    for(int i=0;i<4;i++)
    {
        if(a[i]==5)
            a[i]=0;
        printf("%d",a[i]);
    }
}
