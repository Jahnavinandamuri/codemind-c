#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int a[n],s=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i+2<n;i++){
        if(a[i]%2==1 && a[i+1]%2==0 &&a[i+2]%2==1){
          s++;
        }
    }
    printf("%d",s);
    return 0;
}
