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


