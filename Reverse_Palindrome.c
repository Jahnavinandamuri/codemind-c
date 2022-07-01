#include<stdio.h>
int rev(int n){
    int r,sum=0;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;
}
int palin(int n){
    int r,sum=0,temp=n;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if (temp==sum)
    return 1;
    else
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int y=rev(n)+n;
    while (1){
        if(palin(y)){
            printf("%d",y);
            break;
        }
        else{
            y=rev(y)+y;
        }
    }
    return 0;
}