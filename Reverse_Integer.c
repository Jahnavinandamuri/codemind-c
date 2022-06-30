#include<stdio.h>
int main(){
    int num,t,sum=0,f=0;
    scanf("%d",&num);
    if(num<0){
        num=-num;
        f=1;
    }
    while(num>0){
        t=num%10;
        sum=(sum*10)+t;
        num=num/10;
    }if(f==0)
    printf("%d",sum);
    else{
        printf("%d",-sum);
    }
    return 0;
}
