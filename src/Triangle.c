#include "Triangle.h"
#include "CException.h"
//TypeCheck checkZeroOrNegativeTriangle(int,int,int);
//TDD= Test DrivenDevelopment
//1. Write test(nest test)
//2. Write code to pass the test
//3. Run test:if test failing, go to step2
//4. Goto step 1

TriangleType getTriangleType(int side1, int side2, int side3){
	//int x;
	
	//x=checkZeroOrNegativeTriangle(side1,side2,side3);
	//if(x==NORESULT)
		//return UNKNOWN;
	if(side1<=0||side2<=0||side3<=0)
		Throw(INVALID_LENGTH);
	if(side1==side2 && side1==side3 && side2==side3)
	{
		return EQUILATERAL;
	}
	else if (side1==side2 || side1==side3 || side2==side3)
	{
		return ISOCELES;
	}
	else 
	{
		return SCALENE;
	}
}

/*
TypeCheck checkZeroOrNegativeTriangle(int side1 ,int side2 ,int side3)
    {
	 if(side1<=0||side2<=0||side3<=0)
	
		return NORESULT;
	 else
		return GOTRESULT;
	}
*/	
	