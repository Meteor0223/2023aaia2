///week03-3.cpp (不是C)
#include <stdio.h>
int main()
{
    int a =10;
    printf("%5d 佔了5格\n",a );
    float pi=3.1415926535897993238462643383279;
    printf("%f浮點數只有8格\n",pi);
    printf("%12f 如果印12格結果是對其右邊\n",pi);
    printf("%12.10f印12格，點的右邊10格，但不准\n",pi);
    double pi2=3.1415926535897993238462643383279;
    printf("%12.10f 兩倍浮點數double印點右邊10格\n",pi2);
}
