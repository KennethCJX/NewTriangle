#include "unity.h"
#include "Triangle.h"
#include "Exception.h"
#include "CException.h"


CEXCEPTION_T ex;

void setUp(void)
{
}

void tearDown(void)
{
}

int multiply (int valA, int valB){
	if(valA <0)
	throwException(NEGATIVE_VALUE,NULL,0,"The valA operand cannot be negative:%d",valA);
	if(valB<0)
	throwException(NEGATIVE_VALUE,NULL,0,"The valB operand cannot be negative:%d",valB);
	return valA*valB;
}

int addAndMultiplyPositives(int val1, int val2,int val3){
	return multiply(val1+val2,val3);
}

void test_addAndMultiplyPositives_expect_EXCEPTION_to_be_thrown(){
	Try{
	int result= addAndMultiplyPositives(3,-4,-5);
	TEST_FAIL_MESSAGE("Expect NEGATIVE_VALUE to be thrown");
	}Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(NEGATIVE_VALUE,ex->errorCode);
		freeException(ex);
	}
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

/*void test_Side_given_3_3_3_expect_GOTRESULT() {
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
*/

void test_TriangleType_given_1_2_0_expect_INVALID_LENGTH_to_be_thrown()
{
	Try
	{
	TriangleType type = getTriangleType(1,2,0);
	TEST_FAIL_MESSAGE("Expect INVALID_LENGTH_to_be_thrown");
	}Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_5_MINUS2_10_expect_INVALID_LENGTH_to_be_thrown()
{
	Try
	{
	TriangleType type = getTriangleType(5,-2,10);
	TEST_FAIL_MESSAGE("Expect INVALID_LENGTH_to_be_thrown");
	}Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}


void test_TriangleType_given_MINUS1_2_5_expect_INVALID_LENGTH_to_be_thrown()
{
	Try
	{
	TriangleType type = getTriangleType(-1,2,5);
	TEST_FAIL_MESSAGE("Expect INVALID_LENGTH_to_be_thrown");
	}Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_2_5_MINUS8_expect_INVALID_LENGTH_to_be_thrown()
{
	Try
	{
	TriangleType type = getTriangleType(2,5,0-8);
	TEST_FAIL_MESSAGE("Expect INVALID_LENGTH_to_be_thrown");
	}Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_0_0_0_expect_INVALID_LENGTH_to_be_thrown()
{
	Try
	{
	TriangleType type = getTriangleType(0,0,0);
	TEST_FAIL_MESSAGE("Expect INVALID_LENGTH_to_be_thrown");
	}Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}




