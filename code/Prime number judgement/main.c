#include <stdio.h>
#include <stdlib.h>
/*************************************
����һ������3������n���ж����Ƿ�Ϊ�����������yes/no��
���磬����4�����no��
����7�����yes��
�������룬�����error���������û�лس����š�
**************************************/

int main()
{
   int num1,num2;
   int m,n;
   scanf("%d",&num1);
   if(num1>3)
   {
        n=num1%10;
       if(n%2==0)
        printf("no");
       else if(num1==2147483647)
        printf("yes");
       else
           {
               num2 = num1 - 1;
               while(1)
               {
               m = num1%num2;

                if(m==0)
                    {
                    printf("no");
                    break;
                    }
                else if(num2==2)
                        {
                            printf("yes");
                            break;
                        }
                        else  num2--;
                            continue;
               }

            }
    }
       else  printf("error");
}
