#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int com = -2;
    srand(time(0));
    com = rand()%100;
    int player = -1;
    cout  <<  "游戏开始"  <<  endl;
    while(1){
        cout << "请输入一个0~100的数"  <<  endl;
        cin >> player;
        if (player < 0){cout << "输入错误！范围为0~100。" << endl;}
        else if (player > 100){cout << "输入错误！范围为0~100。" << endl;}
        else if(player < com){cout << "太小了！" << endl;}
        else if (player > com){cout << "太大了！" << endl;}
        else if (player == com){
            cout << "猜对了！数字为" << player << endl << "游戏已退出。" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
