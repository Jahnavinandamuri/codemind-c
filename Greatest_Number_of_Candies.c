#include<stdio.h>
int main(){
    int n,gre=0;
    scanf("%d",&n);int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;scanf("%d",&k);
    for(int i=0;i<n;i++){
        
        if(a[i]>gre){
            gre=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if((a[i]+k)>=gre){
            printf("True ");
        }
        else
        printf("False ");
    }
    return 0;
    
}


