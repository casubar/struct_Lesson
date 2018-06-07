#include "stdafx.h"
#include "CppUnitTest.h"
#include "../struct_Lesson/header_struct_Lesson.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1_struct_Lesson
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(total(2, 3), 5);
		}

	};
}