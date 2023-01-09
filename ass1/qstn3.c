//Count number of 1's present in that string
#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter word:");
	gets(str);
	int n=strlen(str);
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='1')
		{
			count++;
		}
	}
	printf("%d\n",count);
}
