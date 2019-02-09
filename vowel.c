#include<stdio.h>
int main()
{
char a[10];
int i;
char s[]={'a','e','i','o','u'};

for(i=0;i<1;i++)
{
scanf("%s",&a[i]);
}
if((a[i]>65) && (a[i]<92))
{
if(a[i]==s[i])
{
	printf("Vowel");
}
else if(a[i]!=s[i])
{
	printf("Consonant");
}
}
else
{
    printf("invalid");
}
return 0;
}

