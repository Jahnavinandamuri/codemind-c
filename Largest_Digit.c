
#include<stdio.h>
int main(){
    int num,a,b,c;
    scanf("%d",&num);
    b=0,c=0;
    while(num>0){
        
        a=num%10;
        num=num/10;
        if(a>=b){
            b=a;
        }    
        else{
        c=a;
        }
    }
    if(b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    
    return 0;
}










































































