#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    int year;
    printf("请输入月份，我来判断天数：");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("31天");
        break;
    case 2:
    printf("请输入年份：");
    scanf("%d",&year);
    if(year%4==0)
       printf("29天");
    else{printf("28天");}
        break;
    case 3:
        printf("31天");
        break;
    case 4:
        printf("30天");
        break;
    case 5:
        printf("31天");
        break;
    case 6:
        printf("30天");
        break;
     case 7:
        printf("31天");
        break;
    case 8:
        printf("31天");
        break;
     case 9:
        printf("30天");
        break;
    case 10:
        printf("31天");
        break;
    case 11:
        printf("30天");
        break;
    case 12:
        printf("31天");
        break;
    default:
        printf("你傻吗？月份最大就是12啊！");
    }
}
