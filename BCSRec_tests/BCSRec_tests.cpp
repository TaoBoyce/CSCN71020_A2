#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRectests
{
	TEST_CLASS(BCSRectests)
	{
	public:
		
		TEST_METHOD(getPerimeterFunctionality1)
		{
			int Result;
			int inA = 1;
			int inB = 2;
			Result = getPerimeter(&inA, &inB);
			Assert::AreEqual(6, Result);
		}

		TEST_METHOD(getPerimeterFunctionality2)
		{
			int Result;
			int inA = 2;
			int inB = 1;
			Result = getPerimeter(&inA, &inB);
			Assert::AreEqual(6, Result);
		}

		TEST_METHOD(getAreaFunctionality1)
		{
			int Result;
			int inA = 1;
			int inB = 2;
			Result = getArea(&inA, &inB);
			Assert::AreEqual(2, Result);
		}

		TEST_METHOD(getAreaFunctionality2)
		{
			int Result;
			int inA = 2;
			int inB = 1;
			Result = getArea(&inA, &inB);
			Assert::AreEqual(2, Result);
		}
	};
}
