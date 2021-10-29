#include "pch.h" 
#include "CppUnitTest.h" 
#include "..\LB5.5\LB5.5.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		TEST_METHOD(TestMethod1)

		{
			int n = 20;
			int t;
			int depth;
			t = f(n, 1, depth);
			Assert::AreEqual(2,t);
		}
	};
}