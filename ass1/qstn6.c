/*
Check whether the given input string contains
only alphabets
only digits
only 0s and 1s.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter word: ");
	gets(str);
	int n=strlen(str);
	int i,count1=0,count2=0,count3=0;
	for(i=0;i<n;i++)
	{
		if(isalpha(str[i]))
			count1++;
		if(str[i]>='0' && str[i]<='9')
			count2++;
		if((str[i]=='0' || str[i]=='1') && !(str[i]>='2' && str[i]<='9'))
			count3++;
	}
	if(n==count1)
		printf("Only Alphabet\n");
	if(n==count3)
		printf("Only 0s and 1s\n");
	else if(n==count2)
		printf("Only Digit\n");
	if(n!=count1 && n!=count2 && n!=count3)
		printf("Nothing");
	return 0;
}
