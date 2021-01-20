#include <stdio.h>
#include<math.h>
#define  MAXSIZE    11	
#define  ERROR      0
#define  OK         1

typedef struct
	{
		int data[MAXSIZE] ; 
		int top;
	}SqStack;

Push(SqStack *S, int e)
{
	if(S->top == MAXSIZE - 1)
	{
		return ERROR;
	}
	S->top++;
	S->data[S->top]=e;
	
	return OK;
}

Pop (SqStack *S, int *e)
{
	if(S->top==0)
		return ERROR;
	*e=S->data[S->top];
	S->top--;
	return OK;
}

void homework1()
{
	int er[100];
	int i = 0,sum,mid;
	int ans = 0,j = 0;
	printf("������һ������");
	scanf("%d",&sum);
	for(i = 0;i <= 8;i++)
	{
		er[i] = 0;
	}
	i = 0;
	while(sum != 0)
	{
//		printf("%d %d ",sum,i);
		mid = sum % 2;
//		printf("%d ",mid);
		er[i] = mid;
//		printf("%d\n",er[i]);
		sum = sum / 2;
		i++;
	}
//	for(i = 0;i <= 7;i++)
//	{
//		printf("%d ",er[i]);
//	}
//	printf("%d\n",er[7]);
	if(er[7] == 0)
	{
		printf("�����Ǹ����� ѧ��Ϊ"); 
	}
	else if(er[7] == 1)
	{
		printf("�����Ǹ�Ů�� ѧ��Ϊ");
	}
	for(i = 0;i <= 6 ;i++)
	{
		ans += pow(2,j) * er[i];
		j++;
	}
		printf("%d",ans); 
 } 
 
void homework2()
{
	long long i,j,n;
	printf("����������Ҫѭ��ִ�ж�����\n");
	scanf("%lld",&n);
	for(i = 1;i <= n;i++)
	{
		for(j=1;j <= i;j++)
		{
			printf("%lld5*%lld5 ",j,i);
		}
		printf("\n");
	}

}

void homework3()
{
	SqStack sum;
	int i;
	int e;
	for(i = 0;i <= 9;i++)
	{
		Push(&sum ,i);
		printf("%d\n",i);
	}
	for(i = 0;i <= 9;i++)
	{
		Pop(&sum , &e);
		printf("%d\n",i,e);
	}
}

void homework4()
{
	int flag;
	
	printf("������Ҫ�鿴�ڼ��ε���ҵ���(�����밢��������)\n");
	scanf("%d",&flag);
	
	switch(flag)
	{
		case (1):
			homework1();break;				
		case (2):
			homework2();break;
		case (3):
			homework3();break;
	
	}
}

int panduan()
{
	int i;
	
	printf("�����Ƿ�Ҫ�����鿴��ҵ��1/0��\n");
	scanf("%d",&i);
	
	return i;
}

int main()
{
	while(panduan())
	homework4();
		
	return 0;
 } 
