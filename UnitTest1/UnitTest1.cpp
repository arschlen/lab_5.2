#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../lab_5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double eps = 1;
            double s = 1;
            int n = 1;

            S(2.0, eps, n, s);

            Assert::IsTrue(fabs(log(2.0) - s) < eps, L"Test failed for x = 2.0");
        }
    };
}