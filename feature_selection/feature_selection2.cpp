#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
double x[5000][500];
int main()
{
	int i,j,k,l,m,n;
	
	char str[10000];
	char name[100];
	int col[20]={2,3,4,6,13,16,19};
	FILE *p=fopen("GM.txt","r");
	i=0;
	while(fgets(str,10000,p)) 
	{
		l=strlen(str);
		str[l-1]='\0';
		char *pp=strtok(str," ");
		j=0;
		while(pp!=NULL)
		{
			x[i][j++]=atof(pp);
			pp=strtok(NULL," ");
		}
		i++;
	}
	//printf("*");
	for(k=0;k<7;k++)
	{
		sprintf(name,"%d.txt",col[k]+231);
		FILE *p1=fopen(name,"w");
		m=col[k]-1;
		for(j=0;j<i;j++)
		{
			fprintf(p1,"%g\n",x[j][m]);
		}
		fclose(p1);
	}
	return(0);
 }

