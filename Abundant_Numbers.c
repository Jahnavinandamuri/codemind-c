#include<stdio.h>
int main(){
    int num,x=0,k=0,i,t;
    scanf("%d",&num);
    for(i=1;i<num;i++){
        t=num%i;
        if(t==0){
            x=i+k;
            k=x;
        }
    }
    if(k>num){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}
