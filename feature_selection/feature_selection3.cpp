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
	int col[20]={72,76,109,177,183,190,198,253,304,311,324,345,360,362,408};
	FILE *p=fopen("K-space.txt","r");
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
	for(k=0;k<15;k++)
	{
		sprintf(name,"%d.txt",col[k]+251);
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

