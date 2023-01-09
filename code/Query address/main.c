#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=8;
    int*p_num;
    *p_num=&num;
    *p_num=111;
    printf("num为%d",*p_num);

    printf("num地址为%p\n",&num);
    printf("num指针的地址为%p",&p_num);
}
