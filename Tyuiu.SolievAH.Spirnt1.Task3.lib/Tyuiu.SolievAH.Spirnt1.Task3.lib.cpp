// Tyuiu.SolievAH.Spirnt1.Task3.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint1Task3V0
{
	virtual int Uslovie(int a) override
	{
		return a;
	};
};