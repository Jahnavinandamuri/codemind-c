#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],ev=0,o=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ev++;
        }
        else
        o++;
    }
    printf("%d %d",ev,o);
    return 0;
}
