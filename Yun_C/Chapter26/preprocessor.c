#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)


//��ũ�� ���

//#define NAME "ȫ�浿"
//#define AGE 24
//#define PRINT_ADDR puts("�ּ� : ��⵵ ���ν� \n");
//
//int main(void)
//{
//	printf("�̸� : %s \n", NAME);
//	printf("���� : %d", AGE);
//	PRINT_ADDR;
//	
//	return 0;
//}


//��ũ�� �Լ�

//#define SQUARE(X) X*X
//
//int main(void)
//{
//	int num = 20;
//
//	//�������� ���
//	printf("Square of num : %d \n", SQUARE(num));
//	printf("Square of -5 : %d \n", SQUARE(-5));
//	printf("Square of 2.5 : %f \n", SQUARE(2.5));
//
//	//���������� ���
//	printf("Square of 3+2 : %d \n", SQUARE(3+2));
//
//	return 0;
//}


//���� ���ǵ� ��ũ�� ���

//#define PI 3.14
//#define PRODUCT(X, Y) ((X)*(Y))
//#define CIRCLE_AREA(R) (PRODUCT((R), (R)*PI)
//
//int main(void)
//{
//	double rad = 2.1;
//	printf("������ %f�� ���� ���� : %f \n", rad, CIRCLE_AREA(rad)));
//
//	return 0;
//}


//��ũ�� �Լ��� ����

//#define DIFF_ABS(X, Y) ((X)>(Y) ? (X)-(Y) : (Y)-(X))
//
//int main(void)
//{
//	printf("�� ���� �� : %d \n", DIFF_ABS(8, 7));
//	printf("�� ���� �� : %g \n", DIFF_ABS(1.8, -1.4));
//
//	return 0;
//}


//���Ǻ� ����

//#define ADD 1
//#define MIN 0
//
//int main(void)
//{
//	int num1, num2;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d \n", &num1, &num2);
//
//#if ADD
//	printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif
//
//#if MIN
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif
//
//	return 0;
//}


//ifdef

////#define ADD 1
//#define MIN 0
//
//int main(void)
//{
//	int num1, num2;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d \n", &num1, &num2);
//
//#ifdef ADD
//	printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif
//
//#ifdef MIN
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif
//
//	return 0;
//}


//#else

//#define	HIT_NUM 5
//
//int main(void)
//{
//#if HIT_NUM == 5
//	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�");.
//#else
//	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�");
//#endif
//
//	return 0;
//}


//#elif

//#define HIT_NUM 7
//
//int main(void)
//{
//#if HIT_NUM == 5
//	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�");
//#elif HIT_NUM == 6
//	puts("��ũ�� ��� HIT_NUM�� ���� 6�Դϴ�");
//#elif HIT_NUM == 7
//	puts("��ũ�� ��� HIT_NUM�� ���� 7�Դϴ�");
//#else
//	puts("��ũ�� ��� HIT_NUM�� ���� 5, 6, 7�� Ȯ���� �ƴմϴ�");
//#endif
//
//	return 0;
//}


// ���ڿ� ġȯ

//#define STRING_JOB(A, B) #A "�� ������ " #B "�Դϴ�."
//
//int main(void)
//{
//	printf("%s \n", STRING_JOB(�̵���, ������));
//	printf("%s \n", STRING_JOB(�ѻ��, ��ɲ�));
//
//	return 0;
//}


//��ũ�� ���̱�

////#define STNUM(Y, S, P) YSP
////#define STNUM(Y, S, P) Y S P
////#define STNUM(Y, S, P) ((Y)*100000 + (S)*1000 + (P))
//#define STNUM(Y, S, P) Y ## S # P
//
//int main(void)
//{
//	printf("�й� : %d \n", STNUM(10, 65, 175));
//	printf("�й� : %d \n", STNUM(15, 10, 223));
//
//	return 0;
//}


//practice 1

//#define ADD(A, B, C) A + B + C
//#define MULTI(A, B, C) A * B * C
//
//int main(void)
//{
//	printf("%d \n", ADD(2, 3, 4));
//	printf("%d \n", MULTI(2, 3, 4));
//
//	return 0;
//}


//practice 2

//#define PI 3.14
//#define AREA(R) ((R) * (R) * (PI))
//
//int main(void)
//{
//	double rad;
//
//	printf("������ : ");
//	scanf("%lf", &rad);
//	
//	printf("���� ���� : %f \n",AREA(rad));
//
//	return 0;
//}


//practice 3

#define MAX(A, B) ( (A) > (B) ? (A) : (B) )

int main(void)
{
	int a, b;
	printf("�� �� �Է� : ");
	scanf("%d %d", &a, &b);

	printf("ū ���� : %d \n", MAX(a, b));

	return 0;
}