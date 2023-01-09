//Input a string of alphabets
//Now count frequency of each alphabet present in that string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter word: ");
	gets(s);
	int n=strlen(s);
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		if(s[i])
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(s[i]==s[j])
				{
					s[j]='\0';
					count++;
				}
			}
			printf("%c --> %d\n",s[i],count);
		}
	}
	return 0;
}
