#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int com = -2;
    srand(time(0));
    com = rand()%100;
    int player = -1;
    cout  <<  "��Ϸ��ʼ"  <<  endl;
    while(1){
        cout << "������һ��0~100����"  <<  endl;
        cin >> player;
        if (player < 0){cout << "������󣡷�ΧΪ0~100��" << endl;}
        else if (player > 100){cout << "������󣡷�ΧΪ0~100��" << endl;}
        else if(player < com){cout << "̫С�ˣ�" << endl;}
        else if (player > com){cout << "̫���ˣ�" << endl;}
        else if (player == com){
            cout << "�¶��ˣ�����Ϊ" << player << endl << "��Ϸ���˳���" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
