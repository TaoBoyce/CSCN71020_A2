#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality1)
		{
			int Result;
			int inA = 1;
			int inB = 2;
			Result = getPerimeter(&inA, &inB);
			Assert::AreEqual(6, Result);
		}
		
		TEST_METHOD(PerimeterFunctionality2)
		{
			int Result;
			int inA = 2;
			int inB = 1;
			Result = getPerimeter(&inA, &inB);
			Assert::AreEqual(6, Result);
		}
		
		TEST_METHOD(PerimeterFunctionality3)
		{
			int Result;
			int inA = 2;
			int inB = 2;
			Result = getPerimeter(&inA, &inB);
			Assert::AreEqual(8, Result);
		}
		
		TEST_METHOD(PerimeterFunctionality4)
		{
			int Result;
			int inA = 0;
			int inB = 0;
			Result = getPerimeter(&inA, &inB);
			Assert::AreEqual(0, Result);
		}
	};
}
