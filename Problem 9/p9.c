#include<stdio.h>

void main()
{
int a,b,c;

for(a=1;a<1000;a++)
{

	for(b=1;b<1000;b++)
	{
		for(c=1;c<1000;c++)
		{
			if( a+b+c==1000 && (a*a)+(b*b)==(c*c) )
				printf("a is %d\nb is %d\nc is %d\nabc is %d\n",a,b,c,a*b*c);
				
		}
	}
}
}
