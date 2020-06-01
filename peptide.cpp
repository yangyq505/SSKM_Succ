#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[10000];
	
	char s[1000];
	int i,j,k,l,m,n,t=10;
	char name[1000];
	FILE *p=fopen("sequence.txt","r");
	FILE *posi=fopen("window21.txt","w");
	FILE *namep=fopen("name+position.txt","w");
	while(fgets(str,10000,p))
	{
		l=strlen(str);
		str[l-1]='\0';
		char *pp=strtok(str,">");
		
		strcpy(name, pp);
	
		fgets(str,10000,p);
		l=strlen(str)-1;
		for(i=0;i<l;i++)
		{
			if(str[i]=='K')
			{
				fprintf(namep,"%s %d\n",name,i+1);
					if(i<t)
					{
						for(j=i-t;j<0;j++)
						{
							fprintf(posi,"X");
						}
						for(j=0;j<=i+t;j++)
						{
							fprintf(posi,"%c",str[j]);
						}
					}
					else if(i+t>=l)
					{
						for(j=i-t;j<l;j++)
						{
							fprintf(posi,"%c",str[j]);
						}
						for(j=l;j<=i+t;j++)
						{
							fprintf(posi,"X");
						}
					}
					else
					{
						for(j=i-t;j<=i+t;j++)
						{
							fprintf(posi,"%c",str[j]);
						}
					}
					fprintf(posi,"\n");
			}
		}
	}
}

