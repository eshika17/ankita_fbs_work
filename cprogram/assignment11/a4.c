//WAP to Form a New String where the First Character and the Last Character have been Exchanged
#include<stdio.h>
int main() {
	char str[10];
	int len;
	
	printf("enter string:");
	scanf("%s",str);

	len=strlen(str);

	if(len<2) {
		printf("string is to short:");
	} else {
		char temp;
		temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("new string %s",str);
}