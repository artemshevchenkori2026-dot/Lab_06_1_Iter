#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1/Lab_06_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest_Lab06_1)
    {
    public:
        TEST_METHOD(TestMethod_CountAndSum)
        {
            // Test array with known values
            // Indices:   0   1   2    3   4   5  6  7
            int testArray[] = { 10, 15, -5, 20, 30, 40, 5, -2 };
            int size = 8;

            // Matching elements: 15 (idx 1), 20 (idx 3), 30 (idx 4), 5 (idx 6)
            // Expected count = 4
            // Expected sum = 15 + 20 + 30 + 5 = 70

            int expectedCount = 4;
            int expectedSum = 70;

            Assert::AreEqual(expectedCount, Count(testArray, size));
            Assert::AreEqual(expectedSum, Sum(testArray, size));
        }
    };
}