//�ڽ��� �ּҸ� �Է¹޾� �ڽ��� �ּ� ���̸�ŭ heap�� �Ҵ�޾� �ְ�
//������ִ� ���α׷� �����

#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//   char *p;
//   char addr[100];
//   int len;
//   gets(addr);//scanf("%s", addr);
//   len = strlen(addr);//���� ���� -- �Է°��� abc�϶� 3����Ʈ��ŭ�� ������
//   p = (char *)malloc(sizeof(char) * len + 1); // (len + 1)�� ���� ��ŭ ���� �����ְ� p�� ����
//   strcpy(p, addr);// p�� ��ġ�� ����Ŵ
//   puts(p);
//   free(p);
//}

//#include<stdlib.h> //malloc
//
//int main()
//{
//   char *p;
//   char addr[100];
//   int len;
//   gets(addr);//scanf("%s", addr);
//   len = strlen(addr);//���� ���� 
//   p = malloc(len); // len�� ���� ��ŭ p�� ����
//   strcpy(p, addr);// p�� ��ġ�� ����Ŵ
//   puts(p);
//}


//int main()
//{
//   char name[4] = "HYS";
//   char *p = name;
//   printf("%s", p);
//}


////day_5
//#include "My.h"
//
//int main()
//{
//   printf("%d\n", ADD(10, 5));//��ũ�� --> �ӵ��� ����
//   printf("%d\n", add(10, 5));//�ӵ��� ����
//}


//int main()
//{
//	char **p;
//	int num,dx;
//	char buff[100];
//
//	printf("��� ������ �Է� : ");
//	scanf("%d", &num);
//	getchar(); //3���� ���� ���ι��� ��ȿó���ϰڴ�.
//
//	p = (char **)malloc(sizeof(char *) *num);			//�ٽ� ���ΰ� �ʿ��� �κ�
//
//	for (dx = 0; dx < num; dx++)
//	{
//		printf("%d��° ������ : ", dx + 1);
//		gets(buff);
//		p[dx] = (char *)malloc(sizeof(char) * strlen(buff) + 1);
//		strcpy(p[dx], buff);
//	}
//
//	for (dx = 0; dx < num; dx++)
//		puts("p[dx]");
//
//	for (dx = 0; dx < num; dx++)
//		free("p[dx]");
//
//	free(p);
//
//}


//����ü
//p1 ����ü�� �̸�, ����, ���̸� �Է��� ����غ���
//struct person
//{
//	char name[20];
//	char address[20];
//	int my_age;
//};
//
//int main()
//{
//	struct person p1;					//����ü ����
//	strcpy(p1.name, "�赿��");
//	strcpy(p1.address, "Jeju Island");
//	p1.my_age = 23;
//
//	printf("�̸� : %s\n�ּ� : %s\n���� : %d\n", p1.name, p1.address, p1.my_age);
//
//	gets(p1.name);
//	gets(p1.address);
//	scanf("%d", &p1.my_age);
//	printf("�̸� : %s\n�ּ� : %s\n���� : %d\n", p1.name, p1.address, p1.my_age);
//}


//�Լ� 3���� �����Ͻÿ�
//struct num
//{
//	int fir;
//	int sec;
//};
//
//int func1(int x, int y)		{return x + y;}
//
//int func2(struct num *p)	{return (p->fir)*(p->sec);}
//
//int func3(struct num *p)	{return p->fir + p->sec + (p + 1)->fir + (p + 1)->sec;}
//
//main()
//{
//	struct num a = { 1,2 }, b = { 3,4 }, c[2] = { 5,6,7,8 };
//
//	func1(a.fir, a.sec);		//����ü�ɹ� ���� ������ ��
//	func2(&b);					//����ü �����ּ� ������ ��
//	func3(c);					//����ü �迭�ּ� ������ ��
//}


//��ø����ü
//����ü ���� �ɹ��� �ٸ� ����ü�� ����Ͽ� ����ȭ ����
//struct engin {
//	int piston;
//	char pipe;
//	float power;
//};
//
//struct Car {
//	struct engin eg;
//	char handle;
//	float wheel;
//};
//
//int main()
//{
//	struct Car bmw = { 100,'a',200, 90,22 };
//	printf("%f", bmw.eg.power);					//���ο� �����ڴ� �׻� ������, . �� -> �� ��� ���� �ް���
//}


//����ü
//union share {
//	int a;
//	char b[4];
//};
//
//int main() {
//	union share ss; 
//	ss.a = 0x12345678;				//a �޸𸮿� 78 56 34 12 �� ����
//	printf("%x\n", ss.b[0]);
//	ss.b[0] = 0xaf;
//	printf("%x\n", ss.a);
//}


//�����
//int main()
//{	
//	FILE *fp;
//	fp = fopen("a.txt", "w");			//a.txt ���Ͽ� ������ fp�� ���İ���
//										//w�� ��½�Ʈ���� ����ڴ�.
//	fprintf(fp, "%d %s\n", 10, "hong");
//	fclose(fp);
//
//	int num;
//	char name[100];
//	fp = fopen("a.txt", "r");
//	fscanf(fp, "%d %s", &num, name);
//	fclose(fp);
//	
//	fprintf(stdout, "%d %s\n", num, name);
/*printf("%d %s\n", 10, "hong");
fprintf(stdout, "%d %s\n", 10, "hong");*/
//}


//1. �ڽ��� �̸��� Ű����� �Է�
//2. �Էµ� �̸��� name.txt�� ���
//3. name.txt ���Ͽ� �ִ� �ڽ����� �̸��� �ֿܼ� ���
//int main()
//{
//	char name[10];
//	gets(name);
//	
//	FILE *fp;
//	fp = fopen("name.txt", "w");
//	fprintf(fp, "%s", name);
//	fclose(fp);
//	
//	
//
//	fp = fopen("name.txt", "r");
//	fscanf(fp,"%s", name);
//	printf("%s", name);
//}


//���� ����
//�ѱ��ھ� ����
//int main()
//{
//	FILE *fr, *fw;
//	int ch;
//
//	fr = fopen("name.txt", "r");
//	fw = fopen("backup.txt", "w");
//
//	while ((ch = fgetc(fr)) != -1)		//fgetc �� int���� ������
//		fputc(ch, fw);
//	
//	fclose(fr);
//	fclose(fw);
//}

//�� �پ� ����
//int main()
//{
//	FILE *fr, *fw;
//	int ch;
//	char buff[1024];
//
//	fr = fopen("name.txt", "r");
//	fw = fopen("backup.txt", "w");
//
//	while (fgets(buff, 1024, fr) != NULL)
//		fputs(buff, fw);
//
//	fclose(fr);
//	fclose(fw);
//}

//�����ǰ� ��ŭ ����
int main()
{
	FILE *fr, *fw;
	int ch;
	char buff[1000];
	int cnt;
	int byte = 0;				//����Ȯ��

	fr = fopen("1.jpg", "rb");
	fw = fopen("2.jpg", "wb");

	while (1)
	{
		cnt = fread(buff, 1, 1000, fr);		//1byte¥�� 100���� fr���� �о� buff�� �ְڴ�
		if (cnt != 1000)					//������ �� or �߰��� ������ �������
		{
			if (feof(fr))					//������ ���̸� 0�� �ƴѰ�
			{
				fwrite(buff, 1, cnt, fw);
				puts("���缺��");
				byte += cnt;
			}
			else
				puts("�������");
			break;
		}
		fwrite(buff, 1, 1000, fw);
		byte += 1000;
	}
	fclose(fr);
	fclose(fw);
	printf("%d ����Ʈ ������", byte);
}