#include <iostream>

using namespace std;

int main()
//������� ���� � ����� :D . ���� ��� ������ ���
{
    setlocale (0,"");
    cout << "���� ��������� ����� '����������� ������'" << endl;
    cout << "(1)������ (0 �����)" << endl;
    int v,v1;
    cin >> v;
    if (v == 1) {
        cout << "�� ������ 2 �������" << endl;
        cout << "(0)������� (1)������" << endl;
        cin >> v1;
        if (v1 == 0) {
            cout << "�� ����� ������� � �������� � ������" << endl;
            cout << "�������" << endl;
        }else if (v1 == 1) {
        cout << "�� ����� �� ������ �����" << endl;
        cout << "���� ����� �������" << endl;
        }
    } else if (v != 1) {
    cout << "�����" << endl;
    }

    return 0;
}
