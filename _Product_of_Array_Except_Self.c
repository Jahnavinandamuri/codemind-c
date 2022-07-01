#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++){
        int mul=1;
        for(int i=0;i<n; i++){
            if(i!=j)
            mul*=a[i];
        }
        b[j]=mul;
    }
    for(int j=0;j<n;j++)
    printf("%d ",b[j]);
    return 0;
    
}
