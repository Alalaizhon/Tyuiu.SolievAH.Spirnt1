// Tyuiu.SolievAH.Sprint1.Task1.1.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint1Task1
{
	virtual int Logic(int a, int b) override
	{

		return 2 * (a + b);

	};

};