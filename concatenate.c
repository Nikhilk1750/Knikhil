#include<stdio.h>
char* str_cat(char*,char*);
int main()
{
	char str[50],str2[50];
	puts("Enter the First String:");
	scanf("%s",str);
	puts("Enter the Second String:");
	scanf("%s",str2);
	str_cat(str,str2);
}
char* str_cat(char *s,char *d)
{
	int len=0,i;
	for(len=0;s[len];len++);
	for(i=0;d[i];i++,len++)
	{
		s[len]=d[i];
	}
	puts(s);
}
