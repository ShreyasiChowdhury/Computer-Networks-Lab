/*
Input a string of 0 and 1.
Count number of 1’s present in every alternate position starting from 1st position.
(e.g. positions 1,3,5,7,9 and so on)
Count number of 1’s present in every two alternate positions starting from 2nd position.
(e.g. positions 2,3,6,7,10,11,14,15 and so on)
Count number of 1’s present in every four alternate positions starting from 4th position.
(e.g. positions 4,5,6,7,12,13,14,15,20,21,22,23 and so on)
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter word:");
	gets(str);
	int n=strlen(str);
	int i,j,count=0;
	for(i=0;i<n;i=i+2)
	{
		if(str[i]=='1')
		{
			count++;
		}
	}
	printf("1 jump --> %d\n",count);
	count=0;
	for(i=1;i<n;i=i+4)
	{
		if(str[i]=='1')
		{
			count++;
		}
		if(str[i+1]=='1')
		{
			count++;
		}
	}
	printf("2 jump --> %d\n",count);
	count=0;
	for(i=3;i<n;i=i+8)
	{
		if(str[i]=='1')
		{
			count++;
		}
		if(str[i+1]=='1')
		{
			count++;
		}
		if(str[i+2]=='1')
		{
			count++;
		}
		if(str[i+3]=='1')
		{
			count++;
		}
	}
	printf("4 jump --> %d\n",count);
}
