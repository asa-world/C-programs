#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

/**************************************
游戏规则：
双方初始血量为100滴血，
每次攻击5-15滴血，
HP最先到0即被KO
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
        printf("本轮玩家1攻击力为%d\t玩家2剩余血量为%d\n",attack1,HP2);
        printf("本轮玩家2攻击力为%d\t玩家1剩余血量为%d\n",attack2,HP1);
        printf("***********************************\n");
        Sleep(500);
        }

        if(HP1<0&&HP2<0)
        printf("游戏结束，双方同归于尽");
        else if(HP1>0)
            printf("游戏结束，玩家2被KO，玩家1胜");
            else printf("游戏结束，玩家1被KO，玩家2胜");

}
