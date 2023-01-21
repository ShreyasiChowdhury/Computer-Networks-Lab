#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 20
int freq(char str[],int n)
{
	int count=0,i;
	for(i=0;i<n;i++)
	{
		if(str[i]=='1')
			count++;
	}
	return count;
}
void print(char str[],int n)
{
	int i;
	printf("Original Data Word:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
int main()
{
	char str[max];
	printf("Enter binary bit stream: ");
	gets(str);
	int n=strlen(str);
	int count=freq(str,n);
	int ch;
	printf("\n1. Even Parity\n2. Odd Parity\n");
	printf("Enter choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			if(count%2==0)
			{
				printf("\nAccepted\n");
				print(str,n);
			}
			else
			{
				printf("\nRejected\n");
			}
			break;
		case 2:
			if(count%2==1)
			{
				printf("\nAccepted\n");
				print(str,n);
			}
			else
			{
				printf("\nRejected\n");
			}
			break;
		default:
			printf("Wrong Input\n\n");
			exit(1);
	}
	return 0;
}

