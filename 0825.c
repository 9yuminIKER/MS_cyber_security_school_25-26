#include <stdio.h>
int main(void)
{
/*	int score;
	
	printf("점수를 입력하세요: ");
	scanf("%d",&score);
	
	if(score>=90)
	{
		printf("A");	
	}
	else if(score>=80)
	{
		printf("B");	
	}
	else if(score>=70)
	{
		printf("C");	
	}
	else if(score>=60)
	{
		printf("D");	
	}
	else
	{
		printf("F");
	}
} */
	int sum=0;
	double av;
	int i;
	int score;
	int g;
	
	for(i=1;i<6;i++)
	{
		printf("과목%d를 입력하세요:", i);
		scanf("%d",&score);
		sum=score+sum;
	}
	av=sum/5;
	printf("총점:%d, 평균:%2.f",sum,av );

	if(av>=90)
	{
		printf(" 학점:A");
	}
	else if(av>=80)
	{
		printf(" 학점:B");
	}
	else if(av>=70)
	{
		printf(" 학점:C");
	}
	else if(av>=60)
	{
		printf(" 학점:D");
	}
	else
	{
		printf(" 학점:F");
	}
	
 
}
