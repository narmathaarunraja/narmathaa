#include<stdio.h>
int main()
{
char a;
scanf("%s",&a);

if((a >='a'&& a<='z') || (a >='A'&& a<='Z'))
{

	printf("Alphabet");
}
else
{
	printf("No");
}

return 0;
}
