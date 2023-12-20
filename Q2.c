#include<stdio.h>
#include<string.h>

int string()
{
	char str[100];
	int len=0;

	printf("Enter any string:-");
	gets(str);
	
	len=strlen(str);
	
	return len;
}

void main(){
	
	printf("The length of your string is :- %d",string());

}
