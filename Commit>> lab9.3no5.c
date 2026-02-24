#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main()
{
	int num=0;
	char n[50],total[50];
	
	gets(n);
	int len = strlen(n);
	
	for(int i=0;i<len;i++)
	{
		if(isdigit(n[i]) == 1)
		{
			num += n[i] - '0';
		}
	}
	
	printf("%d",num);
}
