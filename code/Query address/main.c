#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=8;
    int*p_num;
    *p_num=&num;
    *p_num=111;
    printf("numΪ%d",*p_num);

    printf("num��ַΪ%p\n",&num);
    printf("numָ��ĵ�ַΪ%p",&p_num);
}
