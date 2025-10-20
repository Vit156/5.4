#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int N = 5;
			double expected = P0(N);

			double p1 = P1(N, N);
			double p2 = P2(N, 25);
			double p3 = P3(N, N, 1);
			double p4 = P4(N, 25, 1);

			double eps = 1e-10;

			Assert::IsTrue(fabs(expected - p1) < eps);
			Assert::IsTrue(fabs(expected - p2) < eps);
			Assert::IsTrue(fabs(expected - p3) < eps);
			Assert::IsTrue(fabs(expected - p4) < eps);
		}
	};
}