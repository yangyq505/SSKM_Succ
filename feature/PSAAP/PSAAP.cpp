#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	char str[1000];
	int i,j,k,l=21,m,n;
	//FILE *p=fopen("positive.txt","r");
	//FILE *p1=fopen("negative.txt","r");
	FILE *p2=fopen("matrix.txt","r");
	freopen("../../feature_selection/PSAAP.txt","w",stdout);
	double matrixp[25][25];
	double matrixn[25][25];
	double matrix[25][25];
	int frep[25][25];
	int fren[25][25];
	memset(frep,0,sizeof(frep));
	memset(fren,0,sizeof(fren));
	char amino[25]="ACDEFGHIKLMNPQRSTVWYX";
	i=0;
	while(fgets(str,1000,p2))
	{
		l=strlen(str);
		str[l-1]='\0';
		char *pp=strtok(str," ");
		j=0;
		while(pp!=NULL)
		{
			matrix[i][j]=atof(pp);
			j++;
			pp=strtok(NULL," ");
		}
		i++;
	}
	FILE *posi=fopen("../../window21.txt","r");
	//FILE *nega=fopen("negative.txt","r");
	while(fgets(str,1000,posi))
	{
		for(i=0;i<l;i++)
		{
			if(i==10)continue;
			for(j=0;j<21;j++)
			{
				if(str[i]==amino[j])
				{
					printf("%g ",matrix[i][j]);
					break;
				}
			}
		 }
		printf("\n"); 
	 } 
	return(0);
}

