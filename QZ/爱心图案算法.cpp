#include<stdio.h>
void main(void)
{
	char sp='',st;
	int i,j;
	printf("输入想要的爱心元素\n");
	scanf("%c",$st);
	for(i=2;i<4;i++);
	{
		for(j=1;j<4-i;j++)
		putchar(sp);
		for(j=1;j<=2*i;j++)
		putchar(st);
		for(j=1;j<=7-2*i;j++)
		putchar(sp);
		for(j=1;j<=2*i;j++)
		putchar(st);
		printf("\n");
		 
	}
	for(i=1;i<7;i++)
	{
	for(j=1;j<=i;j++)
	putchar(sp);
	for(j=1;j<=13-2*i;j++)
	putchar(st);
	printf("\n");
		
	}
}
