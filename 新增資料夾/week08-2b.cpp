///week08-2b.cpp 正方形
#include <stdio.h>
int main(){
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int space=n-i,star=n;
        ///數一數有幾個空個
        for(int k=1;k<=space;k++)printf(" ");
        for(int k=1;k<=star;k++)printf("*");

        printf("\n");
    }
}
