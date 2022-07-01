#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],ct=0,big=0,flag=0,maj=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        maj=a[i];
        for(int j=0;j<n;j++){
            if(maj==a[j]){
                ct++;
            }
        }
        if(ct>n/2){
            if(big<ct){
                big=ct;
                flag=maj;
            }
        }
        maj=0;
        ct=0;
    }
    if(big>n/2){
        printf("%d",flag);
    }
    return 0;
}















