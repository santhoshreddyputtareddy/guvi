#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
for(c=a;c<=b;c++)
if(c%2==0)
{
    printf("%d",c);
    printf(" ");
}
return 0;
}
