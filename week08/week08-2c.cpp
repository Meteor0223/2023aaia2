///week08-2c.cpp 三角形
#include <stdio.h>
int main(){
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int star=i;
        ///數一數有幾個空個
        for(int k=1;k<=star;k++)printf("*");

        printf("\n");
    }
}
