#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.Sprint1.Task1.1.lib/Tyuiu.SolievAH.Sprint1.Task1.1.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* date = new Service1();
			int a = 5;
			int b = 5;
			int res;

			res = date->Logic(a, b);

			Assert::AreEqual(20, res);





		}
	};
}
