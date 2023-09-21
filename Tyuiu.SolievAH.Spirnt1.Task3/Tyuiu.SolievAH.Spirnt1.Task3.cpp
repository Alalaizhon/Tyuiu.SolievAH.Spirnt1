// Tyuiu.SolievAH.Spirnt1.Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.SolievAH.Spirnt1.Task3.lib/Tyuiu.SolievAH.Spirnt1.Task3.lib.cpp"


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint1Task3V0* date = new Service;
    cout << "Привет!";
    int value = 0; bool flag = false;
    while (!flag) {
        cout << "Введите четырехзначное число:";
        cin >> value;
        if (value >= 1000 && value <= 9999)
            flag = true;
        else
            cout << "Некорректный ввод!\n";
    }
    cout << "Результат:";
    if (value != 1000 && value % 4 == 0)
        cout << value * 2;
    else
        cout << value / 5;
    return 0;
}

