#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
int main()
{
	char cw[max]={'\0'},div[max]={'\0'},dw[max]={'\0'},ncw[max]={'\0'};
	printf("Codeword: ");
	gets(cw);
	strcpy(ncw,cw);
	printf("Coefficients of generator polynomial: ");
	gets(div);
	int cwlen=strlen(cw);
	int divlen=strlen(div);
	int i,j;
	for(i=0;i<cwlen-divlen+1;i++)
	{
		if(cw[i]=='1')
		{
			for(j=0;j<divlen;j++)
			{
				if(cw[i+j]==div[j])
					cw[i+j]='0';
				else
					cw[i+j]='1';
			}
		}
	}
	for(i=cwlen-divlen+1;i<cwlen;i++)
	{
		if(cw[i]=='1')
		{
			printf("Error detected\n");
			exit(1);
		}
	}
	for(i=0;i<cwlen-divlen+1;i++)
	{
		dw[i]=ncw[i];
	}
	printf("Original data receive\n");
	printf("Actual data:");
	for(i=0;i<cwlen-divlen+1;i++)
	{
		printf(" %c",dw[i]);
	}
	return 0;
}
