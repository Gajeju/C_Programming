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


//������ ����

//#include "areaArith.h"
//#include "roundArith.h"
//
//int main(void)
//{
//	printf("�ﰢ���� ����(�غ� 4, ���� 2) : %f \n", TriangleArea(4, 2));
//	printf("�� ����(������ 3) : %f \n", CircleArea(3));
//
//	printf("���簢�� �ѷ�(�غ� 2.5 ���� 5.2) : %f \n", RectangleRound(2.5, 5.2));
//	printf("���簢�� �ѷ�(���� ���� 3) : %f \n", SquareRound(3));
//
//	return 0;
//}


//����ü

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
//	printf("�� : %d \n", val.quotient);
//	printf("������ : %d \n", val.remainder);
//
//	return 0;
//}


//�ش����Ͽ� ����ü ����

//#include "intdiv.h"
//
//extern Div IntDiv2(int num1, int num2);
//
//int main(void)
//{
//	Div val = IntDiv2(5, 2);
//	printf("�� : %d \n", val.quotient);
//	printf("������ : %d \n", val.remainder);
//
//	return 0;
//}


//����ü�� �ߺ�����

//#include "intdiv.h"
//#include "intdiv3.h"
//
//int main(void)
//{
//	Div val = IntDiv3(5, 2);
//	printf("�� : %d \n", val.quotient);
//	printf("������ : %d \n", val.remainder);
//
//	return 0;
//}


//���Ǻ� �������� �̿��� �ذ�

#include "stdiv2.h"
#include "intidv4.h"

int main(void)
{
	Div val = IntDiv4(5, 2);
	printf("�� : %d \n", val.quotient);
	printf("������ : %d \n", val.remainder);

	return 0;
}