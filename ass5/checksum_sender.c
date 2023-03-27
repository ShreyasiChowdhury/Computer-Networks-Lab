#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define size 50
int main()
{
	char dw[size]={'\0'},ndw[size]={'\0'};
	int n,seg,i,j,k=0,flag=0,carry=0,term=0;
	printf("Dataword: ");
	scanf("%s",&dw);
	n=strlen(dw);
	printf("Segment length = ");
	scanf("%d",&seg);
	//segment checking
	for(i=1;i<=seg/2;i++)
	{
		if(pow(2,i)==seg)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
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
			ndw[i]='0';
		}
		strcat(ndw,dw);
		strcpy(dw,ndw);
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
			term=sum[k]+(dw[j]-48)+carry;
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
	printf("\nChceksum: ");
	for(i=0;i<seg;i++)
	{
		if(sum[i]==0)
		{
			sum[i]=1;
			dw[n+i]='1';
		}
		else
		{
			sum[i]=0;
			dw[n+i]='0';
		}
		printf("%d",sum[i]);
	}
	printf("\nCode word: %s\n",dw);
	return 0;
}
