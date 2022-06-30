#include<stdio.h>
int main(){
    int a,sum=0,mul=1,r;
    scanf("%d",&a);
    while(a){
        r=a%10;
        sum+=r;
        mul*=r;
        a/=10;
    }
    if(sum==mul)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    
    return 0;
}
