///wee-1.cpp 質數判別
#include <stdio.h>

int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;///失敗
    }
    return 1;///成功!!結尾不能有功，有毒!!
}
int main(){
    printf("起輸入1個數:");
    int n,ans=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            printf("%d ",i);
            ans++;
        }
    }
    printf("總共有 %d 個質數\n",ans);
}
