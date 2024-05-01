#include <stdio.h>
int func(int n){
    if(n==1)return 1;
    return n*func(n-1);
}
int main(){
    int n;
    printf("請輸入一個數字: ");
    scanf("%d",&n);
    int ans = func(n);
    printf("答案是:%d",ans);
}
