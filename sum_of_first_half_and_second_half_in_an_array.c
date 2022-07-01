#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=0;
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++){
        s+=a[i];
    }
    printf("%d
",s);
    s=0;
    for(int i=n/2;i<n;i++){
        s+=a[i];
    }
     printf("%d",s);
     return 0;
    
}
