#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
main()
{	
	
	
	int N,i,j;
	printf("Enter any number N = ");
	scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=N;j>i;j--)
		{
			printf("%d ",j);
		}
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d ",i);
		}
		for(j=i+1;j<=N;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=1;i<N;i++)
	{
		for(j=N;j>i;j--)
		{
			printf("%d ",j);
		}
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d ",i+1);
		}
		for(j=i+1;j<=N;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
