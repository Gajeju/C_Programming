#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

//put_name()
//{
//	printf("2.�赿��\n");
//}
//
//int main(void)
//{
//	printf("1.�赿��\n");
//	put_name();
//	return 0;		//main�Լ��� �� �۵��ߴٴ°��� �˷��ִ� ������ ��
//}


//�� ���� �Ű������� �Լ��� �����ϰ�
//���޵� �Ű������� ���� �����ϴ�
//�Լ������
//int adder(int a, int b)
//{
//	return a + b;
//}
//
//int max(int a, int b) //�� ���� �Ű����� �� ū ���� �����ϴ� �Լ�
//{
//	return a > b ? a : b;;
//}
//
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = adder(a, b);
//	printf("�� ���� �� : %d\n", sum);
//	printf("�� ���� ū �� : %d\n", max(a, b));
//}


//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//
//	switch (a/10)
//	{
//	case 10:
//		printf("A����"); break;
//	case 9:
//		printf("A����"); break;
//	case 8:
//		printf("B����"); break;
//	case 7:
//		printf("C����"); break;
//	default:
//		printf("F����"); break;
//	}
//}


//�Էµ� ���� 1~10����� ���̸� "�հ�", �ƴϸ� "���հ�" ���
//if���� ���¸� ����Ͽ� ����
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	if (a <= 10 && a >= 1) //error : 1<=a<=10
//		puts("�հ�");
//	else
//		puts("���հ�");
//}


//�Էµ� ���ڰ� 'A' ~ 'Z' �� "�빮��" �ƴϸ� "�ҹ���" ���
//int main(void)
//{
//	char a;
//	scanf("%c", &a);
//	if (a >= 'A' && a <= 'Z')
//		puts("�빮��");
//	else
//		puts("�ҹ���");
//}


//�Էµ� ���ڰ� �빮�ڸ� �ҹ��� ��� �ҹ��ڸ� �빮�� ���
//int main(void)			
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'A' && ch <= 'Z')	
//		printf("%c", ch + 32);			 //ch - 'A' + 'a'
//	else if (ch >= 'a' && ch >= 'z')
//		printf("%c", ch - 32);
//}

//�ſ� �߿��� ��ҹ��� ��ȯ
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c\n", ch ^ 0x20);
//}


//while���� ����Ͽ� ���� ���α׷��� ����ÿ�


//1. 1 ~ 10���� ����ϱ�
//int main(void)
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//}


//2. 0 ~ 9���� ���
//int main(void)
//{
//	int a = 0;
//	while (a <= 9)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//}


//3. 1 ~ 100���� ¦���� ���
//int main(void)
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 0)			 //(a % 2 !=1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//4. 1 ~ 100������ ���� 5050 ���
//int main(void)
//{
//	int a = 0, sum = 0;
//	while (a <= 100)
//	{
//		sum += a;
//		a++;
//	}
//	printf("%d", sum);
//}


//5. 1 ~ 100������ 3�� ����� ���
//int main(void)
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//6. 1 ~ 100������ Ȧ���� �ո� ���
//int main(void)
//{
//	int a = 1, sum = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			sum += a;
//		}
//		a++;
//	}
//	printf("odd sum : %d", sum);
//}


//7. 1 ~ 100������ 3�� ����� 7�� ����� ���
//int main(void)
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0 || a % 7 == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//8.�� ���� �Է��ؼ� ������ ū������ ���������� �ٿ�ī�������
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b) {
//		while (a >= b)
//		{
//			printf("%d\n", a);
//			a--;
//		}
//	}
//	else if (a < b) {
//		while (b >= a)
//		{
//			printf("%d\n", b);
//			b--;
//		}
//	}
//}

//int main(void) 
//{
//	int a, b;
//	int big, small;
//	
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		big = a;
//		small = b;
//	}
//	else
//	{
//		big = b;
//		small = a;
//	}
//	while (big >= small)
//	{
//		printf("%d\n", big);
//		big--;
//	}
//}


//100�� 500�� 1000���� �־��� ���� ������
//�߸��� ȭ�󿩺� Ȯ���ϴ� �Լ�

//int fuc(int a)
//{
//	if (a == 100 || a == 500 || a == 1000)			// (a != 100 && a != 500 && a != 1000) return 0;
//		return a;
//	else
//	{
//		printf("�߸��� ȭ�� ���� ���ÿ�\n");
//		return 0;
//	}
//}
//
//int main(void)
//{
//	int a;
//	int sum = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		sum += fuc(a);
//		printf("���� : %d\n", sum);
//	}
//}


//����� �Է��ϼ��� ��� �� Ʋ���� ��ȸ ���� ��ȸ �� 3�� ��� Ʋ�� �� ���� ���� �� ���

//int main(void)
//{
//	int key = 1234;
//	int a;
//	int F = 3;
//
//	puts("����� �Է��ϼ���");
//
//	while (F >= 0)
//	{
//		scanf("%d", &a);
//		if (a == key)
//		{
//			puts("���");
//			break;
//		}
//		else
//		{
//			F--;
//			if (F > 0)
//			{
//				puts("�ٽ��Է��Ͻÿ�");
//				printf("%d�� ��ȸ�� ���ҽ��ϴ�\n", F);
//			}
//			else
//			{
//				puts("����");
//			}
//		}
//	}
//}



//int get_passwd(void);
//void chance(int cnt);
//int compare(int a, int b);
//void police(int cnt);
//
//main()
//{
//
//	int pwd = 1234;//������ ���ص� �н�����
//	int get_pwd; //���� �н�����
//	int cnt = 3; //��ȸ�� 3�� ��
//	do {
//		get_pwd = get_passwd();//�н����� �޾� �� 
//
//		if (compare(pwd, get_pwd)) //�κ��� ������ ������ 1 �ٸ��� 0�� �����Ѵ�.
//		{
//			puts("���");
//			break;
//		}
//		else {
//			chance(--cnt); //��ȸ�� �����ִ� �Լ�
//		}
//	} while (cnt); //cnt!=0
//
//	police(cnt); //������ �θ��� �Լ� cnt�� 0�̸� ������ �θ��� �Լ�
//
//}
//
//int get_passwd(void)
//{
//	puts("����� �Է��ϼ���");
//	int a;
//	scanf("%d", &a);
//	return a;
//}
//
//void chance(int cnt)
//{
//	if(cnt != 0)
//	printf("%d���� ��ȸ�� ���ҽ��ϴ�\n",cnt);
//}
//
//int compare(int a, int b)			//return a==b;
//{
//	if (a == b)
//		return 1;
//	else
//		return 0;
//}
//
//void police(int cnt)
//{
//	if (cnt == 0)
//		printf("����");
//}







//�������� ����
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int dx = 0, rnum;
//	srand(time(NULL));
//	while (dx < 5)
//	{
//		rnum = rand();
//		printf("%d\n", rnum);
//		dx++;
//	}
//}

//���������� ����� �Է°��� ���Ͽ� �Է°����� �۴�, ũ�ٸ� ������ִ� ���α׷�
//�������� 1~100������ ������ ����� ���� %100
//������� ������� ǥ������
//�� �� ū ���� �־����ϱ�

//#include <time.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int age, rev;
//	int try = 1;
//
//	srand(time(NULL));				//1~100 ������ ������ ����
//	age = rand() %100 +1;
//	printf("%d\n", age);
//
//	while (1)
//	{
//		printf("���̸� �Է��ϼ��� : ");	//���� �Է¹ޱ�
//		scanf("%d", &rev);
//
//		if (rev == age)
//		{
//			printf("�����Դϴ�\n%d�� ���� ���߼̽��ϴ�", try);
//			break;
//		}
//		else if (rev > age)
//		{
//			printf("�Է��Ͻ� ������ �۽��ϴ�\n");
//			printf("�õ�Ƚ�� : %d\n", try);
//			try++;
//			continue;
//		}
//		else if (rev < age)
//		{
//			printf("�Է��Ͻ� ������ ŭ�ϴ�\n");
//			printf("�õ�Ƚ�� : %d\n", try);
//			try++;
//			continue;
//		}
//	}
//}


//�ι�° ����

#include <time.h>
#include <stdlib.h>

int main(void)
{
	int age, rev, last_rev;
	int try = 1;

	srand(time(NULL));										//1~100 ������ ������ ����
	age = rand() % 100 + 1;
	printf("%d\n", age);

	while (1)
	{
		printf("���̸� �Է��ϼ��� : ");						//���� �Է¹ޱ�
		scanf("%d", &rev);

		if (rev == age)										//����
		{
			printf("�����Դϴ�\n%d�� ���� ���߼̽��ϴ�", try);
			break;
		}
		else if (rev > age)									//�Է¼��� ���������� Ŭ��
		{
			if (try == 1)
			{
				printf("�Է��Ͻ� ������ �۽��ϴ�\n");		//ù��° �õ�
				printf("�õ�Ƚ�� : %d\n", try);
				last_rev = rev;
				try++;
				continue;
			}
			else
			{
				if ((last_rev > age) && (rev > last_rev))
				{
					puts("�� ū���� �Է��ϼ̽��ϱ�");
					printf("�õ�Ƚ�� : %d\n", try);
					last_rev = rev;
					try++;
					continue;
				}
				else
				{
					printf("�Է��Ͻ� ������ �۽��ϴ�\n");
					printf("�õ�Ƚ�� : %d\n", try);
					last_rev = rev;
					try++;
					continue;
				}
			}
		}

		else if (rev < age)									//�Է¼��� ���������� ������
		{
			if (try == 1)
			{
				printf("�Է��Ͻ� ������ ŭ�ϴ�\n");			//ù��° �õ�
				printf("�õ�Ƚ�� : %d\n", try);
				last_rev = rev;
				try++;
				continue;
			}
			else
			{
				if ((last_rev < age) && (rev < last_rev))
				{
					puts("�� �������� �Է��ϼ̽��ϱ�");
					printf("�õ�Ƚ�� : %d\n", try);
					try++;
					last_rev = rev;
					continue;
				}
				else
				{
					printf("�Է��Ͻ� ������ ŭ�ϴ�\n");
					printf("�õ�Ƚ�� : %d\n", try);
					last_rev = rev;
					try++;
					continue;
				}
			}
		}
	}
}