#include <iostream>

using namespace std;

#include <stdio.h>
#include <stdlib.h>
/*********************
���100~200֮�䲻�ܱ�3����Ҳ���ܱ�7����������
���Ҫ��
�����������Ҫ������֣�����֮�䲻�����κη��š�
**********************/
int main()
{
	int i=100;
    while(i < 201)
    {
        if(i % 21 != 0 )
          {
            printf("%d",i);
            i++;
          };
         else i++;

    }
	return 0;
}


