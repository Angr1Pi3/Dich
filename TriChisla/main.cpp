#include <iostream>

using namespace std;

int main()
{
   setlocale (0,"");
   int a,b,c;
  cout << "������, ��� ������� ��������� ���" << endl;
  cout << "������� �������������� ����������." << endl;
  cout << "������ ����� 3 ����� �����." << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  cout << "����� ����� ����� ";
  cout << a+b+c << endl;
  cout << "������������ ����� ";
  cout << a*b*c << endl;
  cout << "����� ����� �������� �� ��� ����� ";
  cout << (a+b+c)/3 << endl;
   return 0;
}
