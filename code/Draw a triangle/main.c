#include <stdio.h>
#include <stdlib.h>
/***********************************
�����*��ɵ������Ρ�ָ���ױ߳��ȡ���һ�����*���ڶ������***��ÿ���м�����룬ÿ�е����һ��*������س���
����߳�(1-80�е�����)������߳������error��
���磬
����1�����*�س�
����2�����error
����3�����
 *
***�س�
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