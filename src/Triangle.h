#ifndef TRIANGLE_H
#define TRIANGLE_H

#define INVALID_LENGTH	0x16
#define NEGATIVE_VALUE  0x17

typedef enum
{
	//0       1			    2		 3
	UNKNOWN, EQUILATERAL, ISOCELES, SCALENE
}TriangleType;

/*
typedef enum
{
	NORESULT, GOTRESULT
}TypeCheck;
*/

TriangleType getTriangleType(int side1,int side2,int side3);
int addAndMultiplyPositives(int val1, int val2, int val3);
int multiply (int valA, int valB);
//TypeCheck    checkZeroOrNegativeTriangle(int sdie1,int side2,int sdie3);
#endif//TRIANGLE_H
