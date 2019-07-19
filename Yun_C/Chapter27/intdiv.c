typedef struct div
{
	int quotinent;
	int remainder;
} Div;

Div IntDiv(int num1, int num2)
{
	Div dval;
	dval.quotinent = num1 / num2;
	dval.quotinent = num1 % num2;

	return dval;
}