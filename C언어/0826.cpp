#include <stdio.h>
#include <conio.h> 
/*
#include <stdlib.h> // srand, rand 함수를 위해 필요
#include <time.h>   // time 함수를 위해 필요

int main(void)
{
	srand(time(NULL)); 
	int target_number=rand()%100+1;
	int guess;
	while(guess!=target_number)
	{
		printf("숫자를 입력하세요: ");
		scanf("%d",&guess);
		if(guess>target_number)	{
			printf("너무 높아요!");
		}	
		else if(guess<target_number){
			printf("너무 낮아요!");
		 } 
		else{
			printf("정답입니다!");
		}
	}
	
	return 0;
}

int main (void)
{
	int index=1, val=0,end;
	
	printf("인덱스 시작값은?"); scanf("%d",&index);
	printf("인덱스 종료값은?"); scanf("%d",&end);
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
		char k=getch();// console 함수 
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
	
	char k=getch();// console 함수 

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

printf("밑변이 %d 이고 높이가 %d인 사각형의 면적은%d입니다.\n",x,y,r);
printf("밑변이 %d 이고 높이가 %d인 삼각형의 면적은%1.f입니다\n.",x,y,t);
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
//a: 소문자 A : 대문자 @ : 특수문자 4 : 숫자
