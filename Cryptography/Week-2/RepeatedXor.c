#include<stdio.h>
#include<string.h>
int fromhex(char);
char tohex(int);
main()
{
	int i,l;
	char p[100],k[100],c[100];
	printf("Plain text:");
	scanf("%s",p);
	printf("\nKey:");
	scanf("%s",k);
	l=strlen(k);
	for(i=0;i<strlen(p);i++)
		c[i]=tohex((fromhex(p[i]))^(fromhex(k[i%l])));
	printf("%s",c);
}
	
int fromhex(char ch)
{
	if(ch>='0'&&ch<='9')
		return (ch-'0');
	else
		return (ch-'a'+10);
}
	
char tohex(int n)
{
	if(n<10)
		return n;
	else
	{
		switch(n)
		{
			case 10:return 'a';
 			case 11:return 'b';
 			case 12:return 'c';
 			case 13:return 'd';
 			case 14:return 'e';
 			case 15:return 'f';
		}
 	}
}
