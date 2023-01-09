#include <stdio.h>
#include <stdlib.h>
/***********************************
输出由*组成的三角形。指定底边长度。第一排输出*，第二排输出***，每行中间需对齐，每行的最后一个*后输出回车。
输入边长(1-80中的奇数)，错误边长，输出error。
例如，
输入1，输出*回车
输入2，输出error
输入3，输出
 *
***回车
***************************************/

int main()
{
   int n;
   int i,j;
   scanf("%d",&n);
   if(n%2==0||n<1||n>80)
    printf("error");
   else if(n==1)
        printf("*");
    else
    {
        for(i=0;i<=n/2;i++)
        {
            for(j=0;j<=(n-1)/2-1-i;j++)
            {
                printf(" ");
            }
            for(j=0;j<=(n-1)/2+i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
