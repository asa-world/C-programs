#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[5]={2,4,67,0,9};
    int find;
    int i;
    printf("请输入要找的数字：");
    scanf("%d",&find);
    for(i=0;i<5;i++)
    {
    if(find!=nums[i])
        if(i==4)
            printf("没找到");
            else
        continue;
   else
    {
    printf("猿粪啊，被你找到了！");
    break;
    }
    }

}
