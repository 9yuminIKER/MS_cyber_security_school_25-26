#include <stdio.h>
int main(void)
{
/*	int score;
	
	printf("������ �Է��ϼ���: ");
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
		printf("����%d�� �Է��ϼ���:", i);
		scanf("%d",&score);
		sum=score+sum;
	}
	av=sum/5;
	printf("����:%d, ���:%2.f",sum,av );

	if(av>=90)
	{
		printf(" ����:A");
	}
	else if(av>=80)
	{
		printf(" ����:B");
	}
	else if(av>=70)
	{
		printf(" ����:C");
	}
	else if(av>=60)
	{
		printf(" ����:D");
	}
	else
	{
		printf(" ����:F");
	}
	
 
}
