#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define size 50
int main()
{
	char cw[size]={'\0'},ncw[size]={'\0'};
	int n,seg,i,j,k=0,flag1=0,flag2=0,carry=0,term=0;
	printf("Codeword: ");
	scanf("%s",&cw);
	n=strlen(cw);
	printf("Segment length = ");
	scanf("%d",&seg);
	//segment checking
	for(i=1;i<=seg/2;i++)
	{
		if(pow(2,i)==seg)
		{
			flag1=1;
			break;
		}
	}
	if(flag1==0)
	{
		printf("\nSegment length must be power of 2\n");
		exit(0);
	}
	//padding
	if(n%seg!=0)
	{
		int append=seg-(n%seg);
		for(i=0;i<append;i++)
		{
			ncw[i]='0';
		}
		strcat(ncw,cw);
		strcpy(cw,ncw);
		n+=append;
	}
	int sum[seg];
	for(i=0;i<seg;i++)
		sum[i]=0;
	//addition
	for(i=n-1;i>=0;i=i-seg)
	{
		k=seg-1;
		carry=0;
		for(j=i;j>i-seg;j--)
		{
			term=sum[k]+(cw[j]-48)+carry;
			sum[k]=term%2;
			carry=term/2;
			k--;
		}
		if(carry==1)
		{
			for(j=seg-1;j>=0;j--)
			{
				term=sum[j]+carry;
				sum[j]=term%2;
				carry=term/2;
			}
		}
	}
	//1's complement
	for(i=0;i<seg;i++)
	{
		if(sum[i]==1)
		{
			cw[n+i]='0';
		}
		else
		{
			flag2=1;
			break;
		}
	}
	if(flag2==1)
	{
		printf("\nWrong data received\n");
		exit(0);
	}
	//output
	printf("\nData received ok\nActual data: ");
	for(i=0;i<n-seg;i++)
	{
		printf(" %c",cw[i]);
	}
	printf("\n");
	return 0;
}
