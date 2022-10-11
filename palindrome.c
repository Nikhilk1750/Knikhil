#include<stdio.h>
int l=0;
int plindrome(char *s)
{
	int i,j;
	for(l=0;s[l];l++);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
			break;
	}
	return i;
}
int main()
{
	int val;
	char str[50];
	puts("Enter the string:");
	scanf("%s",str);
	val=plindrome(str);
	if(val>=(l/2))
		puts("string is plindrome\n");
	else
		puts("String is not Plindrome\n");
}

