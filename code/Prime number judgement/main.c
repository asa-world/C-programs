#include <stdio.h>
#include <stdlib.h>
/*************************************
输入一个大于3的整数n，判断它是否为素数。（输出yes/no）
例如，输入4，输出no；
输入7，输出yes。
错误输入，则输出error。所有输出没有回车符号。
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
