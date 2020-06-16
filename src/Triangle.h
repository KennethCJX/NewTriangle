#ifndef TRIANGLE_H
#define TRIANGLE_H

#define INVALID_LENGTH	0x16

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
//TypeCheck    checkZeroOrNegativeTriangle(int sdie1,int side2,int sdie3);
#endif//TRIANGLE_H
