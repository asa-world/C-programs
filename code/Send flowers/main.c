#include <stdio.h>
#include <stdlib.h>

int main()
{
    double flowerprice;
    printf("��һ���ºڷ�ߵ�ҹ��\n");
    printf("һ��С�к����Լ����㻨Ǯ����һ���ʻ��͸�СŮ��\n");
    printf("СŮ���ʡ��⻨�ļ۸��Ƕ��٣���");
    printf("С�к��ش𣺻��ļ۸���");
    scanf("%lf",&flowerprice);
    if(flowerprice>999)
    {
    printf("СŮ��ֱ���ι�ȥ��");
    }
    else if(flowerprice>100&&flowerprice<=999)
    {
    printf("����ͽ�飡");
    }
    else printf("�Ǿ���������˼��˼��������Լ��");
}
