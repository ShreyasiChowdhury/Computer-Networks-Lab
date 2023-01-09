#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int seg;
	printf("Enter word: ");
	gets(str);
	printf("Enter segment length: ");
	scanf("%d",&seg);
	int n=strlen(str);
	char arr[20]={'\0'};
	int i=0,j=0;
	while(n>seg)
	{
		arr[i]='0';
		i++;
		n++;
		if(n%seg==0)
			break;
	}
	strcat(arr,str);
	printf("\n\n%s\n",arr);
	return 0;
}
