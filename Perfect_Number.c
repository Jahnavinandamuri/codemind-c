#include<stdio.h>
int main()
{
    int a,i,j=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            j+=i;
        }
    }
    if(a==j)
    printf("True");
    else
    printf("False");
    return 0;
}