#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
写一个函数计算字符串的长度
*/

int Getlength(char[]);

int Getlength(char length[])
{
    int count=0;
    while(length[count]!='\n')
    {
      count++;
    }
    return count;
}



int main()
{
    int counts;
    char length[50];
   fgets(length,50,stdin);
   counts=Getlength(length);
   printf("%d",counts);

}
