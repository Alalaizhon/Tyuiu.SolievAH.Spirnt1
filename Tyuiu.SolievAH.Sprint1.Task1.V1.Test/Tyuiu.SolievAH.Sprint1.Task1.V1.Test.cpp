#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.Sprint1.Task1.V1.Lib/Tyuiu.SolievAH.Sprint1.Task1.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V01* date = new Service1();
			int a = 9;
			int b = 6;
			int c = 3;
			int res;

			res = date->Rezalt(a, b, c);

			Assert::AreEqual(162, res);



		}
	};
}
