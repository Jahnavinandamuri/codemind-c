#include<stdio.h>
int count(int n){
    int r,count=0;
    if(n==0)
    {
        return 1;
    }
    while(n!=0){
        r=n%10;
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         printf("%d ",count(a[i]));
         
     }
     return 0;
}