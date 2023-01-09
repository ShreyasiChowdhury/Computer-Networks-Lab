//Check whether a number is power of 2 or not
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n>=1 && n%2==0)
	{
		n=n/2;
	}
	if(n==1)
		printf("Yes");
	else
		printf("No");
	return 0;
}
