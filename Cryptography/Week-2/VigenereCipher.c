#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int i,l,t,tr;
	char p[100],k[100],c[100];
	printf("Enter the plain text\n");
	gets(p);
	printf("Enter the key\n");
	gets(k);
	
	l=strlen(k);
	for(i=0;i<strlen(p);i++)	
	{
		p[i]=toupper(p[i]);
		k[i]=toupper(k[i]);
		t=toascii(k[i%l])-'A';
		tr=t+toascii(p[i]);		
		if(tr<'Z')									
			c[i]=(char)tr;
		else
		{
			t=tr%'Z';
			c[i]=(char)('A'+t-1);
		}
	}
	printf("%s",c);
}
