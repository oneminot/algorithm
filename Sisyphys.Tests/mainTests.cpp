#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Sisyphus\Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SisyphysTests
{		
	TEST_CLASS(Person)
	{
	public:
		
		TEST_METHOD(AddTwoNumbers)
		{
			Assert::AreEqual(1, 1);
		}

	};
}