#include<stdio.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<stdlib.h>
int main(int x,char* argv[])
{
	struct sockaddr_in client;
	int c_check;
	char message[100];
	
	c_check=socket(AF_INET,SOCK_STREAM,0);
	
	client.sin_family=AF_INET;
	client.sin_addr.s_addr=inet_addr(argv[1]);
	client.sin_port=htons(atoi(argv[2]));
	
	connect(c_check,(struct sockaddr*)&client,sizeof(client));
	
	recv(c_check,message,100,0);
	printf("\nCodeword recieved from sender is: %s\n",message);
	printf("Enter the string: ");
	fflush(stdin);
	scanf("%s",message);
	send(c_check, message,100,0);
	
	close(c_check);
	
	return 0;
}
