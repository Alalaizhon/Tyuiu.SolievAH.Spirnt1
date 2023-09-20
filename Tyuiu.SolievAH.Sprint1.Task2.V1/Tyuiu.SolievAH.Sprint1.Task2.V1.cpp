// Tyuiu.SolievAH.Sprint1.Task2.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include<string>
#include"../Tyuiu.SolievAH.Sprint1.Task2.V1.Lib/Tyuiu.SolievAH.Sprint1.Task2.V1.Lib.cpp"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint1Task2* date = new Service;
    char space = ' '; 
    int a = 0;
    cout << "Привет севодни, мы будем заставлять компутер умножать!)\n" << "мы введем трехзначное число и переменожим его циферки и попробуем снова получить трехзначное число во прикол да?\n";
    cout << "Введи трехзначное число: \n";
    cin >> a;
    int a1 = a / 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 10) % 100;
    int prikol = a1 * a2 * a3;
    if (prikol >= 100 && prikol < 1000)
    {
        cout << "смотри произведение твоих чисел равна: " << prikol; 
    }
    else 
    {
        cout << "произведение твоих числе не равна трехзначному числу, вот какое получилось: " << prikol;

    }



}
