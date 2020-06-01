#include "unity.h"

#include "Triangle.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_getTriangleType_given_4_4_3_expect_ISOCELES() {
	TriangleType type = getTriangleType(4, 4, 3);
	TEST_ASSERT_EQUAL(ISOCELES, type);
}

void test_getTriangleType_given_3_4_4_expect_ISOCELES() {
	TriangleType type = getTriangleType(3, 4, 4);
	TEST_ASSERT_EQUAL(ISOCELES, type);
}

void test_getTriangleType_given_5_3_5_expect_ISOCELES() {
	TriangleType type = getTriangleType(5, 3, 5);
	TEST_ASSERT_EQUAL(ISOCELES, type);
}

void test_getTriangleType_given_2_2_2_expect_EQUILATERAL() {
	TriangleType type = getTriangleType(2, 2, 2);
	TEST_ASSERT_EQUAL(EQUILATERAL, type);
}

void test_getTriangleType_given_1_2_3_expect_SCALENE() {
	TriangleType type = getTriangleType(1 ,2 ,3);
	TEST_ASSERT_EQUAL(SCALENE, type);
}

void test_Side_given_3_3_3_expect_GOTRESULT() {
	TypeCheck side = checkZeroOrNegativeTriangle(3, 3, 3);
	TEST_ASSERT_EQUAL(GOTRESULT, side);
}

void test_Side_given_0_2_2_expect_NORESULT() {
	TypeCheck side = checkZeroOrNegativeTriangle(0, 2, 2);
	TEST_ASSERT_EQUAL(NORESULT, side);
}

void test_Side_given_2_0_2_expect_NORESULT() {
	TriangleType side = checkZeroOrNegativeTriangle(2, 0, 2);
	TEST_ASSERT_EQUAL(NORESULT, side);
}

void test_Side_given_2_2_0_expect_NORESULT() {
	TypeCheck side = checkZeroOrNegativeTriangle(2, 2, 0);
	TEST_ASSERT_EQUAL(NORESULT, side);
}

void test_Side_given_minus2_2_0_expect_NORESULT() {
	TypeCheck side = checkZeroOrNegativeTriangle(-2, 2, 0);
	TEST_ASSERT_EQUAL(NORESULT, side);
}

void test_getTriangleType_given_0_0_0_expect_UNKNOWN() {
	TriangleType type = getTriangleType(0 ,0 ,0);
	TEST_ASSERT_EQUAL(UNKNOWN, type);
}

