#include<stdio.h>
char* occ(char *,char *);
int space=0;
int main()
{
        char str[100],str2[100];
        puts("Enter the string: ");
        scanf(" %[^\n]",str);
        puts("Enter the sub String2: ");
        scanf("%s",str2);
        char *ptr=occ(str,str2);
        if(ptr==NULL)
                printf("No sub string in main string\n");
        else
                printf("Sub string is / %s / in %d index:\n",ptr,space+1);
}

char* occ(char *s,char *d)
{
	int i,j,k,len;
	for(len=0;d[len];len++);
	for(i=0,j=0;s[i];i++)
	{
		if(s[i]==' ')
			space++;
		if(s[i]==d[j])
		{
			for(j=0,k=i;d[j];j++,k++)
			{
				if(s[k]!=d[j])
					break;
			}
			if(j==len)
				return d;
			j=0;
		}    

	}
	return NULL;
}
