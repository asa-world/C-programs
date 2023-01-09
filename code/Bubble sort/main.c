#include <stdio.h>
#include <stdlib.h>
#define N 5
/**************************************
给五个数字降序排列
降序排列
*************************************/

int main()
{
    int nums[N];
    int i,j,k,m;
    int temp;
    for(k=0;k<N;k++)
    {
     printf("请输入数字：");
    scanf("%d",&nums[k]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(nums[j]<nums[j+1])
            {
            temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
            }


        }
    }
    printf("排序结果为：");
    for(m=0;m<N;m++)
        printf("%d ",nums[m]);

}
