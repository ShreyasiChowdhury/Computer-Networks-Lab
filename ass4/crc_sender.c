#include<stdio.h>
#include<string.h>
#define max 20
int main()
{
	char dw[max]={'\0'},div[max]={'\0'},ndw[max]={'\0'};
	printf("Dataword: ");
	gets(dw);
	printf("Coefficients of generator polynomial: ");
	gets(div);
	int dwlen=strlen(dw);
	int divlen=strlen(div);
	int i,j;
	for(i=dwlen;i<dwlen+divlen-1;i++)
	{
		dw[i]='0';
	}
	printf("Updated divident: %s\n",dw);
	strcpy(ndw,dw);
	for(i=0;i<dwlen;i++)
	{
		if(dw[i]=='1')
		{
			for(j=0;j<divlen;j++)
			{
				if(dw[i+j]==div[j])
					dw[i+j]='0';
				else
					dw[i+j]='1';
			}
		}
	}
	for(i=dwlen;i<strlen(dw);i++)
	{
		ndw[i]=dw[i];
	}
	printf("The codeword is: %s\n",ndw);
	return 0;
}
