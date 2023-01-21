#include<stdio.h>
#include<string.h>
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
void evenpar(char str[],int count,int n)
{
	if(count%2==0)
	{
		strcat(str,"0");
		printf("Even Parity Bit: %c\n",str[n]);
		printf("Even Code Word: %s\n",str);
	}
	else
	{
		strcat(str,"1");
		printf("Even Parity Bit: %c\n",str[n]);
		printf("Even Code Word: %s\n",str);
	}
}
void oddpar(char str1[],int count,int n)
{
	if(count%2==1)
	{
		strcat(str1,"0");
		printf("Odd Parity Bit: %c\n",str1[n]);
		printf("Odd Code Word: %s\n",str1);
	}
	else
	{
		strcat(str1,"1");
		printf("Odd Parity Bit: %c\n",str1[n]);
		printf("Odd Code Word: %s\n",str1);
	}
}
int main()
{
	char str[max],str1[max];
	printf("Enter binary bit stream: ");
	gets(str);
	printf("\nData Word: %s\n",str);
	int n=strlen(str);
	int count=freq(str,n);
	strcpy(str1,str);
	evenpar(str,count,n);
	oddpar(str1,count,n);
	return 0;
}

