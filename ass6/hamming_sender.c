#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char data[100];
	int data1[100],data2[100];
	int dl,r,i=0,j=0,k=0,z,c;
	printf("Enter the dataword: ");
	scanf("%s",data);
	dl=strlen(data);
	while(1)
	{
		if(pow(2,i)>=dl+i+1)
		break;
		i++;
	}
	r=i;
	printf("\nNo of redundant bits: %d\n",r);
	for(i=0;i<dl;i++)
	{
		data1[i]=data[i]-48;
	}
	for(i=0;i<r;i++)
	{
		z=pow(2,i);
		data2[z]=999;
	}
	for(i=dl+r;i>=1;i--)
	{
		if(data2[i]!=999)
		{
			data2[i]=data1[j];
			j++;
		}
	}
	for(i=0;i<r;i++)
	{
		z=pow(2,i);
		c=0;
		for(j=z;j<=dl+r;j=z+k)
		{
			for(k=j;k<z+j;k++)
			{
				if(k<=dl+r && data2[k]!=999)
					c=c+data2[k];
			}
		}
		data2[z]=c%2;
	}
	printf("\nThe codeword is: ");
	j=0;
	for(i=dl+r;i>=1;i--)
	{
		printf("%d",data2[i]);
	}
	return 0;
}
