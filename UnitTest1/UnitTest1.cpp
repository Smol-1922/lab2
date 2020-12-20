#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Dkvit\source\repos\АлгСтр_данных_лб2\АлгСтр_данных_лб2\LinkedList.cpp"
#include "C:\Users\Dkvit\source\repos\АлгСтр_данных_лб2\АлгСтр_данных_лб2\functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(binaryTest_1)
		{
			int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
			int index = binarysearch(array, 10, 4);
			Assert::IsTrue(index == 3);
		}

		TEST_METHOD(binaryTest_2)
		{
			int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
			int index = binarysearch(array, 5, 11);
			Assert::IsTrue(index == -1);
		}

		TEST_METHOD(binaryTest_3)
		{
			int array[10] = { 2,2,2,2,2,6,2,8,9,2 };
			int index = binarysearch(array, 10, 2);
			Assert::IsTrue(index == 4);
		}

		TEST_METHOD(quickTest_1)
		{
			int array[5] = { 1,7,4,9,2 };
			quickSort(array, 0, 5);
			Assert::IsTrue(array[0] == 1);
			Assert::IsTrue(array[1] == 2);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 7);
			Assert::IsTrue(array[4] == 9);
		}

		TEST_METHOD(quickTest_2)
		{
			int array[5] = {1,7,1,7,2};
			quickSort(array, 0, 5);
			Assert::IsTrue(array[0] == 1);
			Assert::IsTrue(array[1] == 1);
			Assert::IsTrue(array[2] == 2);
			Assert::IsTrue(array[3] == 7);
			Assert::IsTrue(array[4] == 7);
		}
		TEST_METHOD(insertTest_1)
		{
			int array[8] = { 10,12,7,5,2,3,9,4 };
			insertSort(array, 8);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 7);
			Assert::IsTrue(array[5] == 9);
			Assert::IsTrue(array[6] == 10);
			Assert::IsTrue(array[7] == 12);
		}

		TEST_METHOD(insertTest_2)
		{
			int array[8] = { 10,12,7,10,2,3,10,3 };
			insertSort(array, 8);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 3);
			Assert::IsTrue(array[3] == 7);
			Assert::IsTrue(array[4] == 10);
			Assert::IsTrue(array[5] == 10);
			Assert::IsTrue(array[6] == 10);
			Assert::IsTrue(array[7] == 12);
		}
		TEST_METHOD(countinTest_1)
		{
			int array[8] = { 10,12,7,5,2,3,9,4 };
			countingSort(array, 8);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 7);
			Assert::IsTrue(array[5] == 9);
			Assert::IsTrue(array[6] == 10);
			Assert::IsTrue(array[7] == 12);
		}
		TEST_METHOD(countinTest_2)
		{
			int array[8] = { 10,12,7,10,2,3,10,3 };
			countingSort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 3);
			Assert::IsTrue(array[3] == 7);
			Assert::IsTrue(array[4] == 10);
			Assert::IsTrue(array[5] == 10);
			Assert::IsTrue(array[6] == 10);
			Assert::IsTrue(array[7] == 12);
		}

		TEST_METHOD(bogoTest_1)
		{
			int array[8] = { 10,12,7,5,2,3,9,4 };
			bogosort(array, 8);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 7);
			Assert::IsTrue(array[5] == 9);
			Assert::IsTrue(array[6] == 10);
			Assert::IsTrue(array[7] == 12);
		}

		TEST_METHOD(bogoTest_2)
		{
			int array[8] = { 10,12,7,10,2,3,10,3 };
			bogosort(array, 5);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 3);
			Assert::IsTrue(array[3] == 7);
			Assert::IsTrue(array[4] == 10);
			Assert::IsTrue(array[5] == 10);
			Assert::IsTrue(array[6] == 10);
			Assert::IsTrue(array[7] == 12);
		}
		TEST_METHOD(countingTest_1)
		{
			int array[8] = { 4,8,2,1,7,12,4,5 };
			countingSort(array, 8);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 3);
			Assert::IsTrue(array[2] == 4);
			Assert::IsTrue(array[3] == 5);
			Assert::IsTrue(array[4] == 9);
			Assert::IsTrue(array[5] == 2);
			Assert::IsTrue(array[6] == 3);
			Assert::IsTrue(array[7] == 4);
		}

		TEST_METHOD(countingTest_2)
		{
			int array[8] = { 2,8,8,6,2,6,8,12 };
			countingSort(array, 8);
			Assert::IsTrue(array[0] == 2);
			Assert::IsTrue(array[1] == 2);
			Assert::IsTrue(array[2] == 6);
			Assert::IsTrue(array[3] == 6);
			Assert::IsTrue(array[4] == 8);
			Assert::IsTrue(array[5] == 8);
			Assert::IsTrue(array[6] == 8);
			Assert::IsTrue(array[7] == 12);
		}
	};
}
