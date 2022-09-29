#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int flag=1,i;
	printf("ENTER THE STRING TO CHECK:");
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!='0'&&s[i]!='1')
		{
			flag=0;
		}
		
	}
	if(flag==1)
	{
		if(s[0]=='0'&&s[l-1]=='1')
		printf("STRING IS ACCEPTED");
		else
		printf("STRING IS NOT ACCEPTED");
	}
	else
	printf("STRING IS INVALID");
}
