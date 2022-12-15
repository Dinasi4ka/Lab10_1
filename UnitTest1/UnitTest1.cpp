#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10_1_1/Lab10_1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char string[] = "'-','a','=','abc'";
			int count = 0;

			int t = ProcessTXT1(string);
			Assert::AreEqual(2, t);

		}
	};
}
