#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

/**************************************
��Ϸ����
˫����ʼѪ��Ϊ100��Ѫ��
ÿ�ι���5-15��Ѫ��
HP���ȵ�0����KO
***************************************/

int main()
{
        int HP1 = 100;
        int HP2 = 100;
        int attack1,attack2;
        srand(time(NULL));
        while(HP1>0&&HP2>0)
        {

        attack1 = rand()%11 + 5;
        attack2 = rand()%11 + 5;
        HP1 = HP1 - attack2;
        HP2 = HP2 - attack1;
        printf("***********************************\n");
        printf("�������1������Ϊ%d\t���2ʣ��Ѫ��Ϊ%d\n",attack1,HP2);
        printf("�������2������Ϊ%d\t���1ʣ��Ѫ��Ϊ%d\n",attack2,HP1);
        printf("***********************************\n");
        Sleep(500);
        }

        if(HP1<0&&HP2<0)
        printf("��Ϸ������˫��ͬ���ھ�");
        else if(HP1>0)
            printf("��Ϸ���������2��KO�����1ʤ");
            else printf("��Ϸ���������1��KO�����2ʤ");

}
