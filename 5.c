#include<stdio.h>
void main()
{

    int a,sum=0,r;
    printf("Enter three digits number=");
    scanf("%d",&a);
    while(a!=0)
    {


        r=a%10;
        sum+=r;
        a=a/10;

    }
    printf("%d",sum);
}
