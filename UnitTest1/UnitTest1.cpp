#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/lab5/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 2;

			double expected = P0(N);
			double res1 = P1(N, 19);
			double res2 = P2(N, N);
			double res3 = P3(N, 19, 1);
			double res4 = P4(N, N, 1);

			Assert::AreEqual(expected, res1, 1e-6, L"P1(N, 19) відрізняється від P0(N)");
			Assert::AreEqual(expected, res2, 1e-6, L"P2(N, N) відрізняється від P0(N)");
			Assert::AreEqual(expected, res3, 1e-6, L"P3(N, 19, 1) відрізняється від P0(N)");
			Assert::AreEqual(expected, res4, 1e-6, L"P4(N, N, 1) відрізняється від P0(N)");
		}
	};
}
