// Tyuiu.SolievAH.Sprint1.Task1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include "../Tyuiu.SolievAH.Sprint1.Task1.1.lib/Tyuiu.SolievAH.Sprint1.Task1.1.lib.cpp"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint1Task1* date = new Service1;
    char space = ' ';
    int a, b;
    cout << "Привет. На этот раз мы вычисляем периметр прямоугольника) для этого вводи значение длины и ширины через пробельчик\n ";
    cin >> a >> b;
    cout << "Твои значение изумительны(?):" << space << a << space << b << space <<"вот такие дела\n \n";
    if (a % 5 == 0) 
    {
        int p = 2 * (a + b);
        cout << "Периметр твоего прямоугольнчика раааааааААааавен: " << p << endl;
    }
    else {
        cout << "\t\t ,adPPYba,  8b,dPPYba, 8b,dPPYba, ,adPPYba,    8b,dPPYba,   \n";
        cout << "\t\t a8P_____88 88P'    Y8 88P'    Y8 a8       8a  88P'    Y8     \n";
        cout << "\t\t 8PP        88         88         8b       d8  88             \n";
        cout << "\t\t  8b, , aa  88         88          8a,    ,a8  88              \n";
        cout << "\t\t  `Ybbd8'   88         88           `YbbdP'    88  " << endl;
    }
    return 0;

}