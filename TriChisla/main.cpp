#include <iostream>

using namespace std;

int main()
{
   setlocale (0,"");
   int a,b,c;
  cout << "Привет, эта простая программа для" << endl;
  cout << "простых математических вычеслений." << endl;
  cout << "Сперва введи 3 любых числа." << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  cout << "сумма чисел равна ";
  cout << a+b+c << endl;
  cout << "произведение равно ";
  cout << a*b*c << endl;
  cout << "сумма чисел деленная на три равна ";
  cout << (a+b+c)/3 << endl;
   return 0;
}
