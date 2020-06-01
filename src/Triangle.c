#include "Triangle.h"

TypeCheck checkZeroOrNegativeTriangle(int,int,int);

TriangleType getTriangleType(int side1, int side2, int side3){
	int x;
	
	x=checkZeroOrNegativeTriangle(side1,side2,side3);
	if(x==NORESULT)
		return UNKNOWN;
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

TypeCheck checkZeroOrNegativeTriangle(int side1 ,int side2 ,int side3)
    {
	 if(side1<=0||side2<=0||side3<=0)
	
		return NORESULT;
	 else
		return GOTRESULT;
	}