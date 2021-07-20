#include<stdio.h>
int prime(int);
void main()
{
	int n;
	printf("Enter The Number: ");
	scanf("%d",&n);
	prime(n)==0?printf("THE NUMBER IS PRIME"):printf("THE NUMBER IS NOT PRIME");
	
}
int prime(int x)
{
	static int i=2;
	if(x%i!=0 && i<x)
	{
		i++;
		return 0+prime(x);
		
	}
	else if(i==x)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
