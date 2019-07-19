#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disalbe : 6001)
#pragma warning (disable : 6031)

//extern void Increment(void);
//extern int GetNum(void);
//
//int main(void)
//{
//	printf("num : %d \n", GetNum());
//	Increment();
//	printf("num : %d \n", GetNum());
//	Increment();
//	printf("num : %d \n", GetNum());
//
//	return 0;
//}


//도형의 넓이

//#include "areaArith.h"
//#include "roundArith.h"
//
//int main(void)
//{
//	printf("삼각형의 넓이(밑변 4, 높이 2) : %f \n", TriangleArea(4, 2));
//	printf("원 넓이(반지름 3) : %f \n", CircleArea(3));
//
//	printf("직사각형 둘레(밑변 2.5 높이 5.2) : %f \n", RectangleRound(2.5, 5.2));
//	printf("정사각형 둘레(변의 길이 3) : %f \n", SquareRound(3));
//
//	return 0;
//}


//구조체

//typedef struct div
//{
//	int quotient;
//	int remainder;
//} Div;
//
//extern Div IntDiv(int num1, int num2);
//
//int main(void)
//{
//	Div val = IntDiv(5, 2);
//	printf("몫 : %d \n", val.quotient);
//	printf("나머지 : %d \n", val.remainder);
//
//	return 0;
//}


//해더파일에 구조체 삽입

//#include "intdiv.h"
//
//extern Div IntDiv2(int num1, int num2);
//
//int main(void)
//{
//	Div val = IntDiv2(5, 2);
//	printf("몫 : %d \n", val.quotient);
//	printf("나머지 : %d \n", val.remainder);
//
//	return 0;
//}


//구조체의 중복선언

//#include "intdiv.h"
//#include "intdiv3.h"
//
//int main(void)
//{
//	Div val = IntDiv3(5, 2);
//	printf("목 : %d \n", val.quotient);
//	printf("나머지 : %d \n", val.remainder);
//
//	return 0;
//}


//조건부 컴파일을 이용한 해결

#include "stdiv2.h"
#include "intidv4.h"

int main(void)
{
	Div val = IntDiv4(5, 2);
	printf("몫 : %d \n", val.quotient);
	printf("나머지 : %d \n", val.remainder);

	return 0;
}