#include<stdio.h>
#include<string.h>
#define size 10
int main()
{
	int table[4][2]={{1,3},{1,2},{1,2},{3,3}},present=0;
	int final=2,i;
	int next=0,invalid=0;
	char string[size];
	
	
	printf("Enter the string:");
	scanf("%s",string);
	
	
	int n=strlen(string);
	for(i=0;i<n;i++)
	{
		if(string[i]=='a')
			next=table[present][0];
		else if(string[i]=='b')
			next=table[present][1];
		else
			invalid=n;
			present=next;		
	}
	if(invalid==n)
	{
		printf("INVALID");
	}
	else if(present=final)
		printf("ACCEPT");
	else
		printf("DONnot ACCEPT");	
	
return 0;
}