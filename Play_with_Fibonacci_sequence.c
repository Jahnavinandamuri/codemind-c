  #include<stdio.h>
int main(){
    int n;int sum=0,a=0,b=1,count=1;
    scanf("%d",&n);
    while(count<=n){
        printf("%d ",sum);
        sum=b+a;
        b=a;
        a=sum;
        count++;
        
    }
    return 0;
}