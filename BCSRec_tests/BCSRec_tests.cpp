#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

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

		TEST_METHOD(setLengthFunctionality1)
		{
			int Result;
			int inA = 5;
			int length = 2;
			setLength(inA, &length);
			Assert::AreEqual(5, length);
		}

		TEST_METHOD(setLengthFunctionality2)
		{
			int Result;
			int inA = 0;
			int length = 2;
			setLength(inA, &length);
			Assert::AreEqual(2, length);
		}

		TEST_METHOD(setLengthFunctionality3)
		{
			int Result;
			int inA = 1;
			int length = 2;
			setLength(inA, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(setLengthFunctionality4)
		{
			int Result;
			int inA = 99;
			int length = 2;
			setLength(inA, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(setLengthFunctionality5)
		{
			int Result;
			int inA = 100;
			int length = 2;
			setLength(inA, &length);
			Assert::AreEqual(2, length);
		}

		TEST_METHOD(setWidthFunctionality1)
		{
			int Result;
			int inA = 5;
			int length = 2;
			setWidth(inA, &length);
			Assert::AreEqual(5, length);
		}

		TEST_METHOD(setWidthFunctionality2)
		{
			int Result;
			int inA = 0;
			int length = 2;
			setWidth(inA, &length);
			Assert::AreEqual(2, length);
		}

		TEST_METHOD(setWidthFunctionality3)
		{
			int Result;
			int inA = 1;
			int length = 2;
			setWidth(inA, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(setWidthFunctionality4)
		{
			int Result;
			int inA = 99;
			int length = 2;
			setWidth(inA, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(setWidthFunctionality5)
		{
			int Result;
			int inA = 100;
			int length = 2;
			setWidth(inA, &length);
			Assert::AreEqual(2, length);
		}
	};
}
