#include<stdio.h>
int main()
{
	char s[100],t[100];
	int i,j=0;
	printf("enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			continue;
		}
		else
		{
			t[j]=s[i];
			j++;
		}
	}
	t[j]='\0';
	printf("%s\n",t);
	return 0;
}
