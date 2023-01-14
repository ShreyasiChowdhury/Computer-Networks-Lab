#include<stdio.h>
#include<string.h>
#define size 20
int checkFreq(char arr[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]=='1')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char str[size];
	printf("Input: ");
	gets(str);
	int n=strlen(str);
	printf("Segment Length: ");
	int seg;
	scanf("%d",&seg);
	char arr[size]={'\0'};
	int i=0,j=0,x=0,y=0;
	while(n!=seg)
	{
		arr[i]='0';
		i++;
		n++;
		if(n%seg==0)
			break;
	}
	strcat(arr,str);
	printf("\nOutput:\n");
	int segno=n/seg;
	char segarr[seg];
	int freq[segno];
	for(i=0;i<n;i=i+seg)
	{
		printf("Segment %d: ",y+1);
		for(j=i;j<seg+i;j++,x++)
		{
			segarr[x]=arr[j];
		}
		x=0;
		printf("%s\n",segarr);
		freq[y]=checkFreq(segarr,seg);
		y++;
	}
	printf("\nFrequency:\n");
	for(i=0;i<segno;i++)
	{
		printf("Segment %d: %d\n",i+1,freq[i]);
	}
	return 0;
}
