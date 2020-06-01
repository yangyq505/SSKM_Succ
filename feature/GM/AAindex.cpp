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
	int i,j,k,l,m,n;
	FILE *p=fopen("window21.txt","r");
	FILE *p0=fopen("AAindex.txt","r");
	char amino[25]="ARNDCQEGHILKMFPSTWYVX";
	double aaindex[25][25];
	i=1;
	while(fgets(str,1000,p0))
	{
		l=strlen(str)-1;
		str[l]='\0';
		char *pp=strtok(str,"	");
		j=0;
		while(pp!=NULL)
		{
			aaindex[i][j]=atof(pp);
			j++;
			pp=strtok(NULL,"	");
		}
		i++;
	}
	
	FILE *p1=fopen("PCP1.txt","w");
	FILE *p2=fopen("PCP2.txt","w");
	FILE *p3=fopen("PCP3.txt","w");
	FILE *p4=fopen("PCP4.txt","w");
	FILE *p5=fopen("PCP5.txt","w");
	FILE *p6=fopen("PCP6.txt","w");
	FILE *p7=fopen("PCP7.txt","w");
	FILE *p8=fopen("PCP8.txt","w");
	FILE *p9=fopen("PCP9.txt","w");
	FILE *p10=fopen("PCP10.txt","w");
	while(fgets(str,1000,p))
	{
		l=strlen(str)-1;
		for(i=0;i<l;i++)
		{
			for(j=0;j<21;j++)
			{
				if(str[i]==amino[j])
				{
					fprintf(p1,"%g ",aaindex[1][j]);
					fprintf(p2,"%g ",aaindex[2][j]);
					fprintf(p3,"%g ",aaindex[3][j]);
					fprintf(p4,"%g ",aaindex[4][j]);
					fprintf(p5,"%g ",aaindex[5][j]);
					fprintf(p6,"%g ",aaindex[6][j]);
					fprintf(p7,"%g ",aaindex[7][j]);
					fprintf(p8,"%g ",aaindex[8][j]);
					fprintf(p9,"%g ",aaindex[9][j]);
					fprintf(p10,"%g ",aaindex[10][j]);
				}
			}
		}
		fprintf(p1,"\n");
		fprintf(p2,"\n");
		fprintf(p3,"\n");
		fprintf(p4,"\n");
		fprintf(p5,"\n");
		fprintf(p6,"\n");
		fprintf(p7,"\n");
		fprintf(p8,"\n");
		fprintf(p9,"\n");
		fprintf(p10,"\n");
		
	}
	fclose(p1);
	fclose(p2);
	fclose(p3);
	fclose(p4);
	fclose(p5);
	fclose(p6);
	fclose(p7);
	fclose(p8);
	fclose(p9);
	fclose(p10);
	return(0);
}

