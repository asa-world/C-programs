#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[5]={2,4,67,0,9};
    int find;
    int i;
    printf("������Ҫ�ҵ����֣�");
    scanf("%d",&find);
    for(i=0;i<5;i++)
    {
    if(find!=nums[i])
        if(i==4)
            printf("û�ҵ�");
            else
        continue;
   else
    {
    printf("Գ�డ�������ҵ��ˣ�");
    break;
    }
    }

}
