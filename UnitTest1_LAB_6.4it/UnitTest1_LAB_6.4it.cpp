#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.4it/lab_6.4it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB64it
{
	TEST_CLASS(UnitTest1LAB64it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double b[] = { -1, 2, -3, 4, 5 };
			int result = Max(b, 5);
			Assert::AreEqual(5, result);
		}
	};
}
