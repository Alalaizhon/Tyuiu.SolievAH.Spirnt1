#include "pch.h"

#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.Spirnt1.Task3.lib/Tyuiu.SolievAH.Spirnt1.Task3.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task3V0* date = new Service();
			int a = 4444;
			if (a != 1000 && a % 4 == 0) {
				a *= 2;
			}
			else
				 a /= 5;
			int res;

			res = date->Uslovie(a);

			Assert::AreEqual(8888, res);



		}
	};
}
