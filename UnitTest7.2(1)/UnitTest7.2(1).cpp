#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7.2(1)/laba7.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest721
{
	TEST_CLASS(UnitTest721)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -8;
			int High = 42;
			int n = 7;
			int k = 4;
			int** a = new int* [n];
			for (int i = 0; i < n; i++)
				a[i] = new int[k];
			Create(a, n, k, Low, High);
			Print(a, n, k);
			Sum(a, n, k);
			for (int i = 0; i < n; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
