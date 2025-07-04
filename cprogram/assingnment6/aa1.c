#include<Stdio.h>
void pallindrom();
int main()
{
	pallindrom();
}
void pallindrom()
{

	int no=121;
	if (no%10== no/100)
		printf("pallindrom");
	else
		printf("not pallindrom");			
}