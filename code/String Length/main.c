#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
дһ�����������ַ����ĳ���
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
