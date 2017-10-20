#include <iostream>

using namespace std;

int main()
//Ядерная дичь с ифами :D . Маде бай Зенгри пай
{
    setlocale (0,"");
    cout << "Мини текстовый квест 'Приключение Антохи'" << endl;
    cout << "(1)Начать (0 Выход)" << endl;
    int v,v1;
    cin >> v;
    if (v == 1) {
        cout << "ты видишь 2 прохода" << endl;
        cout << "(0)Направо (1)Налево" << endl;
        cin >> v1;
        if (v1 == 0) {
            cout << "Ты пошел направо и врезался в дерево" << endl;
            cout << "Молодец" << endl;
        }else if (v1 == 1) {
        cout << "Ты дошел из магаза домой" << endl;
        cout << "Мини квест пройден" << endl;
        }
    } else if (v != 1) {
    cout << "ВЫХАД" << endl;
    }

    return 0;
}
