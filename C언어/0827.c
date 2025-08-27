#include <stdio.h>
#include <conio.h>
/*
int main(void)
{
	char c;
	int k;
	printf(">"); c = getch();
	k=func1(c);
	if((c>='A')&&(c<='Z')) k=1;
	else if((c>='a')&&(c<='z')) k=2;
	else if((c>='0')&&(c<='9')) k=3;
	else k=4;
	switch(k)
	{
		case 1:	printf("%c : 대문자\n",c);	break;
		case 2:	printf("%c : 소문자\n",c);	break;
		case 3:	printf("%c : 숫자\n",c);	break;
		case 4:	printf("%c : 특수문자\n",c);	break;
		default: break; 
	}
}

{
	double total;
	double val[5];
	
	val[0]=1.01;
	val[1]=2.02;
	val[2]=3.03;
	val[3]=4.04;
	val[4]=5.05;
	
	total=val[0]+val[1]+val[2]+val[3]+val[4];
	printf("avr: %lf\n", total/5);
	return 0;
}

{
	char str1[]="Good";
	char str2[]="morning";
	
	printf("%s \n", str1);
	printf("%s %s \n",str1, str2);
		
}

{
	int i;
	char ch;
	char str[]="Hello";
	
	printf("--변경 전 문자열--\n");
	printf("%s \n",str);
	
	for(i=0;i<3;i++)
	{
		ch=str[4-i];
		str[4-i]=str[i];
		str[i]=ch;
	}
	printf("--변경 전 문자열--\n");
	printf("%s \n",str);
	return 0;
}

{
	int a=0x1234;
	char *pc;
	int* pi;
	double *pd;
	printf("&a:%08x %08x\n\n\n",&a, a);

	pi=&a;
	pc=pi;
	pd=pi;

	printf("&a :%08x	%08x\n",&a, a);
	printf("p  :%08x	%08x	%08x\n",pi, pc, pd);
	printf("p+1:%08x	%08x	%08x\n",pi+1, pc+1, pd+1);
	printf("p+2:%08x	%08x	%08x\n",pi+2, pc+2, pd+2);
}

int main(void)
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int i;
	printf("int arr[]={");
	for(i=0;i<9;i++)
	{
		printf("%d",p[i]);
		if(i<8) printf(",");
	}
	printf("};");
	return i;
}
*/

int main(void)
{
	char* str = "Good afternoon";
	printf("before : \"%s\"\n", str);
	str[5] ='_';
	printf("after : \"%s\"\n", str);
}

