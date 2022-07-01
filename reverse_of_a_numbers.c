#include<stdio.h>
int main(){
    int num,t,sum=0;
    scanf("%d",&num);
    while(num>0){
        t=num%10;
        sum=(sum*10)+t;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}
