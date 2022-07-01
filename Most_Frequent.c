#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f,s=0,start=0;
    for(int i=0;i<n;i++){
        f=0;
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                f++;
            }
            if(f>=s){
                if(f==s){
                    if(start>a[i]){
                        start=a[i];
                    }
                }
                else{
                    start=a[i];
                }
                s=f;
            }
        }
    }
    printf("%d",start);
    return 0;
}



