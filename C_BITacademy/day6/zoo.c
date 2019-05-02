#include<stdio.h>
#include<time.h>
#include<string.h>

#pragma warning(disable:4996)


//����
//#define STACK_SIZE 5
//
//int stack[STACK_SIZE];		//������ ũ��
//int top;					//������ ��ġ ������ (�迭�� �ε���)
//
////��� �ڷᱸ���� �ʱ�ȭ�� �־�� ��
//void init_stack(void)
//{
//	top = -1;		//top=0; ���� �Ҽ��� ����
//}
//
//void push(int data)
//{
//	if (top >= STACK_SIZE - 1)
//	{
//		puts("stack overflow");
//		return;
//	}
//		stack[++top] = data;	//stack[0] = 3; stack[1] = 4;
//}
//
//int pop(void)
//{
//	if (top < 0)			//���̻� �� �� ����
//	{
//		puts("stack empty");
//		return -1;
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	init_stack();
//	push(3);
//	push(4);
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	push(3);
//	push(3);
//	push(3);
//	push(3);
//	push(3);
//	push(3);
//}


//bit ������

////bit check	 : if(  &  )
//if (a & 0x1 == 1)
//	puts("odd number");
//
////bit mask	 : =  &
//a = 0xd;	//1101 -> 1 10 1 ��� 10 ��Ʈ�� �̾Ƴ��� ������
//			//0110 -> 0 10 0
//a = a & 6;	//a = 4;
//
//
////bit set	 : =  | (inclusive or)
//a = 4;			//0100
//a = a | 0x9;	//1101	�ݵ�� 1�� ����� ���� �κа� �տ���
//
//
////bit clear  : =  &~			(& + ����������)
//a = 0xd;		//1101	�ݵ�� 0���� ����� ���� �κ��� &~ ����

//int main()
//{
//	int a = 0xA5;			//10100101
//	
//	//6�� ��Ʈ�� 1�̸� true 0�̸� false
//	if ((a & 0x40) == 1)		
//		puts("true");
//	else
//		puts("false");
//
//	//3�� ��Ʈ�� 1�� ��Ʋ�� 1�� set �ϰ� ���
//	a |= (1 << 3) + (1 << 1);		//a = a | 0xA;
//	printf("%x\n",a);
//	
//	//1�� ��Ʈ�� 2�� ��Ʈ�� 0���� clear�ϰ� ���
//	a &= ~((1 << 2) + (1 << 1));	//a = a & ~6;
//	printf("%x\n", a);
//
//	//5,6,7�� ��Ʈ�� ����
//	a&= (1 << 7) + (1 << 6) + (1 << 5);	//a = a & 0xD0;
//	printf("%x\n", a);
//}


//Quueue
//#define Queue_Size 5
//int queue[Queue_Size];
//int front, rear;	//����, ����
//
//void init_quene(void) //�ʱ�ȭ
//{
//	front = rear = 0;
//}
//
//void put(int data)	//rear �� ��ġ�� ������ ���� %������ ����Ͽ� 5�� 0���� ���� (ȯ�� quene)
//{
//	if (front == (rear + 1) % Queue_Size)
//	{
//		puts("queue overflow");
//	}
//	else
//	{
//		queue[rear++] = data;
//		rear = rear % Queue_Size;
//	}
//}
//
//int get(void)	//front ��ġ�� �����͸� ���
//{
//	int rv;			//front �� ���� ��ġ���� ��
//	if (front == rear)
//	{
//		puts("queue underflow");
//		return -1;
//	}
//	rv = queue[front];
//	front = ++front % Queue_Size;
//	return rv;
//}
//
//void print_Q(void)		//��ü��� �Լ�
//{
//	int dx;
//	for (dx = front; dx != rear; dx = ++dx%Queue_Size)
//		printf("%d ", queue[dx]);
//}
//
//int main()
//{
//	init_quene();
//	put(3);
//	put(4);
//	put(1);
//
//	printf("%d\n", get());
//	printf("%d\n", get());
//	printf("%d\n", get());
//	
//	put(5);
//	put(2);
//	put(7);
//	print_Q();
//}




//tree		�ȵ�
//typedef struct _tree Tree;
//struct _tree {
//	int key;
//	struct _tree *left;
//	struct _tree *right;
//};
//Tree *head, *tail;
//
//void init_tree(void)
//{
//	head = (Tree *)malloc(sizeof(Tree));
//	tail = (Tree *)malloc(sizeof(Tree));
//	head->left = tail;
//	head->right = tail;
//	tail->left = tail;
//	head->right = tail;
//}
//
//void preorder(Tree *p)
//{
//	if (p != NULL)
//	{
//		printf("%d ", p->key);
//		preorder(p->left);
//		preorder(p->left);
//	}
//}
//
//void inorder(Tree *p)
//{
//	if (p != NULL)
//	{
//		inorder(p->left);
//		printf("%d ", p->key);
//		inorder(p->left);
//	}
//}
//
//void postorder(Tree *p)
//{
//	if (p != NULL)
//	{
//		postorder(p->left);
//		postorder(p->left);
//		printf("%d ", p->key);
//	}
//}
//
////queue �� �̿��� ������ȸ
//#define Queue_Size 5
//Tree * queue[Queue_Size];		//int -> Tree
//int front, rear;	//����, ����
//
//void init_quene(void) //�ʱ�ȭ
//{
//	front = rear = 0;
//}
//
//void put(Tree * data)	//int -> Tree
//{
//	if (front == (rear + 1) % Queue_Size)
//	{
//		puts("queue overflow");
//	}
//	else
//	{
//		queue[rear++] = data;
//		rear = rear % Queue_Size;
//	}
//}
//
//Tree * get(void)	//front ��ġ�� �����͸� ���
//{
//	Tree * rv;			//front �� ���� ��ġ���� ��
//	if (front == rear)
//	{
//		puts("queue underflow");
//		return -1;
//	}
//	rv = queue[front];
//	front = ++front % Queue_Size;
//	return rv;
//}
//
//void levelorder(Tree *p)
//{
//	Tree * rv;
//	put(p);	//���� ��Ʈ�� ť�� �ֱ�
//	while (front != rear)	//ť�� ������� �ʴٸ�
//	{
//		rv = get();	//������ �༮�� ���� ������ ������ �ִ´�.
//		printf("%d ", rv->key);
//		if (rv->left != NULL)
//			put(rv->left);
//		if (rv->right != NULL)
//			put(rv->right);
//	}
//}
//
//int main(void)
//{
//	Tree a = { 1, NULL, NULL }, b = { 2, NULL, NULL };
//	Tree c = { 3, NULL, NULL }, d = { 4, NULL, NULL };
//	Tree e = { 5, NULL, NULL }, f = { 6, NULL, NULL };
//
//	c.left = &a;
//	a.right = &b;
//	c.right = &d;
//	d.right = &e;
//	e.right = &f;
//
//	preorder(&c);		//����
//	puts("");
//	inorder(&c);		//����
//	puts("");
//	postorder(&c);		//����
//
//	init_quene();
//
//	levelorder(&c);
//}



//2��Ž��
//�̺а˻��� ����Ͽ� ��Pablo�� �� ã�� ���α׷���


char list[][10] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred",
				  "Gabriel", "Helen", "Isabel", "Jane", "Kuper", "Louic",
				  "Mathilda","Nadia", "Olive", "Pablo", "Queen", "Rambo",
				  "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };

int my_bsearch(char* sc)
{
	int mid, low, high;
	low = 0;
	high = sizeof(list) / sizeof(list[0]) - 1;

	while (1)
	{
		mid = (low + high) / 2;
		if (strcmp(list[mid], sc) == 0)
			return mid;
		else if (strcmp(list[mid], sc) < 0)
			low = mid + 1;
		else
			high = mid - 1;
	}
}


int main()
{
	printf("%d", my_bsearch("Pablo"));
}