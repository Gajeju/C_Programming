#include<stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include<time.h>
#include<string.h>
#include<stdlib.h>

//���α׷��� © �� ���� ���� ������ ����
//int main()
//{
//	int a = 10;
//	int *p, *k;
//	p = &a;
//	k = p;
//}


//������ ���
//void last(int *k)
//{
//	*k = 30;
//}
//
//void middle(int *p)
//{
//	*p = 20;
//	last(p);
//}
//
//int main()
//{
//	int a = 10;
//	middle(&a);
//	printf("%d\n", a);
//}


//�����͸� ����� ����ȣ�� (swap)
//void swap(int *a, int *b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a = 10, b = 5;
//	swap(&a, &b);
//	printf("a = %d, b = %d", a, b);
//}


//���ڿ� ������
//void put_s(char *p)
//{
//	int dx;
//	for (dx = 0; p[dx] != '\0'; dx++) //0~99
//	{
//		printf("%c", p[dx]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	char str[] = "abcdefghijklmn";
//	put_s(str);			//�迭���̸� -> �ּ�
//	puts(str);			//��� ���� -> �ý��ۿ� ���� �ڵ尡 ���� ���̶�� ����� �� �ִ�
//}


//�迭�� �ּҿ� �������� �ּ�
//int main()
//{
//	char str[] = "ABCD";
//	char *p;
//	p = str;
//
//	puts(str);
//	puts(p);
//	printf("%x,%x,%x\n", str, p, &p);
//}


//���ڿ� ��ȯ
//int main(void)
//{
//	char a[] = "123";
//	int num;
//	char buf[10];
//
//	num = atoi(a);				//���ڿ��� ���ڷ�
//	printf("%d\n", num);
//
//	strrev(a);
//	printf("%s\n",a);			//���ڿ� ������
//
//	itoa(123, buf, 10);			//123������ buf��� ����(�迭)�� 16���������� ���ڷ� ����
//	printf("%s\n", buf);
//
//}


//�Է¹��� ���ڿ� ������ ���ڸ� ���ϴ� ����� �Է¹��� Ƚ����ŭ �ݺ�
//int main()
//{
//	int input, rev_input, try;
//	char buf[10];
//
//	scanf("%d%d", &input, &try);
//
//	while (try > 0)
//	{
//		rev_input = atoi(strrev(itoa(input, buf, 10)));
//		printf("%10d\n+ %8d\n-------------\n%10d\n\b", input, rev_input, input + rev_input);
//		input = input + rev_input;
//		try--;
//	}
//}


//������ ����
//void put_s(char *p)
//{
//	int dx;
//	for (dx = 0; p[dx] != '\0'; dx++) //0~99
//	{
//		printf("%c", p[dx]);
//	}
//	printf("\n");
//}
//
//void put_s2(char *p)
//{
//	while (*p)
//		printf("%c", *p++);		//*p	p++  : �����ְ� �� ������ �ּҸ� ������Ų��
//	printf("\n");
//}
//
//int main()
//{
//	char str[] = "abcdefghijklmn";
//	put_s(str);			//�迭���̸� -> �ּ�
//	puts(str);			//��� ���� -> �ý��ۿ� ���� �ڵ尡 ���� ���̶�� ����� �� �ִ�
//	put_s2(str);
//}


//�����͸� Ȱ�� (�ٽ� �غ��ߵ�)
//void get_sub_name(char *s_n)
//{
//	printf("������ �̸����Է��ϼ��� : ");
//	scanf("%s", s_n);
//}
//
//int get_exm_cnt(void)
//{	
//	int try;
//	printf("���� Ƚ���� �Է��ϼ��� : ");
//	scanf("%d", &try);
//	return try;
//}
//
//void get_exm_rlt(float *e_r, int cnt)
//{
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d�� ���� ������ : ", i + 1);
//		scanf("%f", &e_r[i]);
//	}
//}
//
//float get_total(float *e_r, int cnt)
//{
//	float sum = 0;
//	for (int i = 0; i < cnt; i++)
//	{
//		sum += e_r[i];
//	}
//}
//
//float get_average(float tot, int cnt)
//{
//	return tot / cnt;
//}
//
//char get_grade(float avg)
//{
//	return avg > 50 ? 'A' : 'F';
//}
//
//print_result(char *s_n, int cnt, float *e_r, float tot, float avg, char grd)
//{
//	puts(s_n);
//	float sum = 0;
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d�� �������� %f\n", i + 1, e_r[i]);
//	}
//	printf("%f %f")
//}
//
//void main(void)
//{
//	char sub_name[15]; /* ���� �̸� */
//	float exm_rlt[10]; /* ���� ���� */
//	int exm_cnt = 0; /* ���� ȸ�� */
//	float total; /* ���� */
//	float average; /* ��� */
//	char grade; /* ���� */
//
//	get_sub_name(sub_name); /* ���� �̸� */
//
//	exm_cnt = get_exm_cnt(); /* ���� ȸ�� */
//
//	get_exm_rlt(exm_rlt, exm_cnt);/* ���� ����*/
//
//	total = get_total(exm_rlt, exm_cnt); /* ���� ��� */
//
//	average = get_average(total, exm_cnt); /* ��� ��� */
//	grade = get_grade(average); /* ������ ����մϴ�. */
//	print_result(sub_name, exm_cnt, exm_rlt,
//		total, average, grade); /* ��� ��� */
//}


//void connect(int *pa, int **ppa)
//{
//	*ppa = pa;
//}
//
//int main()
//{
//	int a = 7;
//	int *p;
//
//	connect(&a,&p);
//	
//	printf("%d\n", *p); //��� 7
//}


//void put_name(char **p)
//{
//	puts(p[0]);				//name ������ �ȿ� �ִ� �ּҰ� �������ִ� ��
//	puts(p[2]);
//}
//
//int main()
//{
//	char *name[] = { "aaa", "CCCC","dd" };
//	put_name(name);
//}


//������ ���� 2�����迭�� ���� �ٲٱ�
//strcpy(dst, src); ��� src�� ������ dst �� ������
//void func(char (*p)[10])
//{
//	char temp[10];
//	strcpy(temp, p[0]);
//	strcpy(p[0], p[1]);
//	strcpy(p[2], p[1]);
//	strcpy(p[1], temp);
//}
//
//int main()
//{
//	char a[3][10] = { "aaa","bbb","ccccc" };
//
//	func(a);
//	puts(a[0]);		//aaa		//cccc
//	puts(a[1]);		//bbb		//aaa
//	puts(a[2]);		//ccccc		//bbb
//}


//�Լ�������
//int add(int a, int b) { return a+b; }		//��� �Լ��� ���� ���ϰ��� ���� ���� �Ű������� ���´�
//int sub(int a, int b) { return a-b; }
//int mul(int a, int b) { return a*b; }
//int dvv(int a, int b) { return a/b; }

//int main()
//{
//	int(*p) (int, int);
//	p = add;
//	printf("%d\n", p(10, 5));
//	p = sub;
//	printf("%d\n", p(10, 5));
//	p = mul;
//	printf("%d\n", p(10, 5));
//	p = dvv;
//	printf("%d\n", p(10, 5));
//}

//�Լ� ������ �迭
//int main()
//{
//	int(*p[4])(int, int) = { add, sub, mul, dvv };
//	int dx;
//	for (dx = 0; dx < 4; dx++)
//		printf("%d\n", p[dx](10, 5));
//}

//�Լ��� �ּҸ� �Ű������� ��� (�� �� �������� �Լ� ��������)
//int all(int a, int b, int(*p)(int, int))	 //sever code	(�ڱ��� Ư���� �����Ǿ� ���� ����)
//{
//	int rlt = p(a, b);					//call back
//	return rlt;
//}

//int main()								//client code	(������ Ư���� ������ �ش�)
//{
//	int rlt;
//	rlt = all(10, 5, add);				//call
//	printf("%d\n", rlt);
//}


int main()
{
	void *p;		//��� ������ �ּҸ� ���� �� �ִ�
	int a = 7;
	p = &a;			//�ּҴ� ����� �� ������, type�� ����� �� ����
	printf("%d\n", *(int*)p);
	char ch = 'A';
	p = &ch;
	printf("%c\n", *(char*)p);
}