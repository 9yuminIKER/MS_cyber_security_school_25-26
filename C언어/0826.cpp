#include <stdio.h>
#include <conio.h> 
/*
#include <stdlib.h> // srand, rand �Լ��� ���� �ʿ�
#include <time.h>   // time �Լ��� ���� �ʿ�

int main(void)
{
	srand(time(NULL)); 
	int target_number=rand()%100+1;
	int guess;
	while(guess!=target_number)
	{
		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d",&guess);
		if(guess>target_number)	{
			printf("�ʹ� ���ƿ�!");
		}	
		else if(guess<target_number){
			printf("�ʹ� ���ƿ�!");
		 } 
		else{
			printf("�����Դϴ�!");
		}
	}
	
	return 0;
}

int main (void)
{
	int index=1, val=0,end;
	
	printf("�ε��� ���۰���?"); scanf("%d",&index);
	printf("�ε��� ���ᰪ��?"); scanf("%d",&end);
	while(index<end)
	{
		val=val+index;
		printf("%d %d\n",val, index);
		index=index+2;
	 } 
	for(index;index<end;index+=2)
	{
		val=val+index;
		printf("%d %d\n",val, index);
	 } 	 
	 
}
int main(void)
{
	int v1;
	int v2;
	
	printf("value 1?"); 
	scanf("%d",&v1);
	printf("value 2?");
	scanf("%d",&v2);
	for(;;)//while(1)
	{
		char k=getch();// console �Լ� 
		if(k=='+')
		{
			printf("%d %c %d=%d\n",v1,k,v2,v1+v2);		
		}
		else if(k=='-')
		{
			printf("%d %c %d=%d\n",v1,k,v2,v1-v2);
		}
		else if(k=='/')
		{
			printf("%d %c %d=%.2f\n",v1,k,v2,(double)v1/v2);
		}
		else if(k=='*')
		{
			printf("%d %c %d=%d\n",v1,k,v2,v1*v2);
		}
	
		else break;
	}
}

int main()
{
	int v1;
	int v2;

	printf("value 1?"); 
	scanf("%d",&v1);
	printf("value 2?");
	scanf("%d",&v2);
	//for(;;)//while(1)
	
	char k=getch();// console �Լ� 

	switch(k)
	{
		case '+':
			printf("%d %c %d=%d\n",v1,k,v2,v1+v2);
			break;
		case '-':
			printf("%d %c %d=%d\n",v1,k,v2,v1-v2);
			break;	
		case '*':
			printf("%d %c %d=%d\n",v1,k,v2,v1*v2);
			break;	
		case '/':
			printf("%d %c %d=%d\n",v1,k,v2,(double)v1/v2);
			break;							
		default: k=3; break;				
	}
	if(k==3)
}
int main()
{
	int num;

	scanf("%d",&num);
	
	
	if(num==0)
	{
		printf("%d : Zero",num);
	}
	if(num==1)
	{
		printf("%d : One",num);
	}
	if(num==2)
	{
		printf("%d : Two",num);
	}
	if(num==3)
	{
		printf("%d : Three",num);
	}
	if(num==4)
	{
		printf("%d : Four",num);
	}
	if(num==5)
	{
		printf("%d : Five",num);
	}
	if(num==6)
	{
		printf("%d :Six",num);
	}
	if(num==7)
	{
		printf("%d : Seven",num);
	}
	if(num==8)
	{
		printf("%d :Eight",num);
	}
	if(num==9)
	{
		printf("%d : Nine",num);
	}
		
	
}

int rectangle(int x, int y);
double triangle(int x, int y);
int main()
{
	int x,y;
	printf("(x,y) ?");
	scanf("%d %d",&x, &y);
	int r = rectangle(x,y);
	double t = triangle(x,y);

printf("�غ��� %d �̰� ���̰� %d�� �簢���� ������%d�Դϴ�.\n",x,y,r);
printf("�غ��� %d �̰� ���̰� %d�� �ﰢ���� ������%1.f�Դϴ�\n.",x,y,t);
}

int rectangle(int x, int y)
{
int xy=x*y;
return xy;
}
double triangle(int x, int y)
{
double xy=(double)x*y/2;
return xy;
} */
//a: �ҹ��� A : �빮�� @ : Ư������ 4 : ����
