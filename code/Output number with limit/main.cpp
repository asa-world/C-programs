#include <iostream>

using namespace std;

#include <stdio.h>
#include <stdlib.h>
/*********************
输出100~200之间不能被3整除也不能被7整除的数。
输出要求：
连续输出满足要求的数字，数字之间不能有任何符号。
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


