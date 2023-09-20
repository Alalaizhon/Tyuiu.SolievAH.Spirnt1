#include "pch.h"
#include "CppUnitTest.h"
#include"../Tyuiu.SolievAH.Sprint1.Task2.V1.Lib/Tyuiu.SolievAH.Sprint1.Task2.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* date = new Service();
			int a = 333;
			int a1 = a / 10;
			int a2 = (a / 10) % 10;
			int a3 = (a / 10) % 100;
			int res;
			
			res = date->LogicLong(a);

			Assert::AreEqual(3267, res);

		}
	};
}
