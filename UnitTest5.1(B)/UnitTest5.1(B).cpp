#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1(B)/Vector2D.h"
#include "../Lab_5.1(B)/Vector2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51B
{
	TEST_CLASS(UnitTest51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D a(1, 0);
			++a;
			Assert::AreEqual(a.getX(), 2.0);
		}
	};
}
