#include<stdio.h>
int main(){
    int num,rem,rem1,temp;
    scanf("%d",&num);
    rem1=0;  temp=num;
    while(num>0){
    rem=num%10;
    rem1=(rem1*10)+rem; 
    num=num/10;
    }
        
    if(temp==rem1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}














