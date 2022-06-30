#include<stdio.h>
int main(){
    int num,a=0,t=0,num1,i;
    scanf("%d",&num);
    num1=num;
    for(i=1;i<num;i++){
        t=num%i;
        if(t==0){
            a=i+a;
            //a=i;
        }
    }
    if(a==num){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}