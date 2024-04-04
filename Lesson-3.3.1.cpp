#include <iostream>

using namespace std;

int main()
{
    string login;
    string password;

    cout << "Введите логин: ";
    cin >> login;
    cout << "Введите пароль: ";
    cin >> password;
    cout << "-----------------";
    cout << endl << login << ", Вы успешно вошли в проект.\n";

    return 0;
}

