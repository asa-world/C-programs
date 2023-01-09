#include <stdio.h>
#include <stdlib.h>

int main()
{
    double flowerprice;
    printf("在一个月黑风高的夜晚\n");
    printf("一个小男孩用自己的零花钱买了一束鲜花送给小女生\n");
    printf("小女生问“这花的价格是多少？”");
    printf("小男孩回答：花的价格是");
    scanf("%lf",&flowerprice);
    if(flowerprice>999)
    {
    printf("小女孩直接晕过去了");
    }
    else if(flowerprice>100&&flowerprice<=999)
    {
    printf("明天就结婚！");
    }
    else printf("那就拉拉手意思意思，明天再约。");
}
