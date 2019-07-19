#include "intdiv.h"

Div IntDiv3(int num1, int num2)
{
	Div dival;
	dival.quotient = num1 / num2;
	dival.remainder = num1 % num2;
	
	return dival;
}