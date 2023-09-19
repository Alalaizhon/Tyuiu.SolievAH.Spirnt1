// Tyuiu.SolievAH.Sprint1.Task1.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include "../Tyuiu.SolievAH.Sprint1.Task1.V1.Lib/Tyuiu.SolievAH.Sprint1.Task1.V1.Lib.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint1Task0V01* date = new Service1;
    int a, b, c = 0;
    char space = ' ';
    cout << "Привет сегодня мы вычислим обьем параллелепипеда!)\n" << "Пожалуйста введи значение длины, ширины, высоты через пробел!)\n";
    cin >> a >> b >> c;
    cout << "Используя формулу для вычисления объема параллелепипеда: V=a*b*c, вычислим искомое значение \n";
    cout << "Вы ввели следующие значения: длина - " << a << space << "ширина - " << b << space << "высота - " << c;
    cout << "\nВ итоге мы получаем = " << date->Rezalt(a, b, c);
    cout << "\nПоздравляю!";
}