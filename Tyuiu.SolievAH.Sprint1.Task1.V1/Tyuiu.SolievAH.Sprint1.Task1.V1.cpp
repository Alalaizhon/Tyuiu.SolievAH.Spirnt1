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
    cout << "������ ������� �� �������� ����� ���������������!)\n" << "���������� ����� �������� �����, ������, ������ ����� ������!)\n";
    cin >> a >> b >> c;
    cout << "��������� ������� ��� ���������� ������ ���������������: V=a*b*c, �������� ������� �������� \n";
    cout << "�� ����� ��������� ��������: ����� - " << a << space << "������ - " << b << space << "������ - " << c;
    cout << "\n� ����� �� �������� = " << date->Rezalt(a, b, c);
    cout << "\n����������!";
}