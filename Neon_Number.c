#include<stdio.h>
int main(){
    int num;int a,sq,sum=0;
    scanf("%d",&num);
    sq=num*num;
    while(sq>0){
        a=sq%10;
        sum=sum+a;
        sq/=10;
    }
    if(sum==num)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}