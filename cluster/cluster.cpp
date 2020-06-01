#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	char str[10000];
	char str1[10000];
	char label[100];
	char name_position[1000];
	double center[10][50];
	double x[50];
	double dis[10];
	FILE *p=fopen("center.txt","r");
	FILE *p0=fopen("feature.txt","r");
	FILE *p00=fopen("../name+position.txt","r");
	FILE *p1=fopen("../predict/test_1.txt","w");
	FILE *p11=fopen("../predict/label1.txt","w");
	FILE *p111=fopen("../predict/name+position1.txt","w");
	FILE *p2=fopen("../predict/test_2.txt","w");
	FILE *p22=fopen("../predict/label2.txt","w");
	FILE *p222=fopen("../predict/name+position2.txt","w");
	FILE *p3=fopen("../predict/test_3.txt","w");
	FILE *p33=fopen("../predict/label3.txt","w");
	FILE *p333=fopen("../predict/name+position3.txt","w");
	FILE *p4=fopen("../predict/test_4.txt","w");
	FILE *p44=fopen("../predict/label4.txt","w");
	FILE *p444=fopen("../predict/name+position4.txt","w");
	FILE *p5=fopen("../predict/test_5.txt","w");
	FILE *p55=fopen("../predict/label5.txt","w");
	FILE *p555=fopen("../predict/name+position5.txt","w");
	i=1;
	while(fgets(str,10000,p))
	{
		l=strlen(str);
		str[l-1]='\0';
		char *pp=strtok(str," ");
		j=0;
		while(pp!=NULL)
		{
			center[i][j]=atof(pp);
			
			j++;
			pp=strtok(NULL," ");
			
		 }
		i++;
		
	}
	m=j;
	while(fgets(str,10000,p0))
	{
		fgets(name_position,1000,p00);
		
		strcpy(str1,str);
		l=strlen(str);
		str[l-1]='\0';
		char *pp=strtok(str," ");
		j=0;
		while(pp!=NULL)
		{
			x[j++]=atof(pp);
		    pp=strtok(NULL," ");
		 }
		for(i=1;i<=5;i++)
		{
			dis[i]=0.0;
			for(j=0;j<m;j++)
			{
				dis[i]+=(x[j]-center[i][j])*(x[j]-center[i][j]);
			}
		}
		
		if(dis[1]<=dis[2]&&dis[1]<=dis[3]&&dis[1]<=dis[4]&&dis[1]<=dis[5])	
		{
			fprintf(p1,"%s",str1);
			fprintf(p11,"1\n");
			fprintf(p111,"%s",name_position);
		}
		else if(dis[2]<=dis[1]&&dis[2]<=dis[3]&&dis[2]<=dis[4]&&dis[2]<=dis[5])	
		{
			fprintf(p2,"%s",str1);
			fprintf(p22,"1\n");
			fprintf(p222,"%s",name_position);
		}
		else if(dis[3]<=dis[1]&&dis[3]<=dis[2]&&dis[3]<=dis[4]&&dis[3]<=dis[5])	
		{
			fprintf(p3,"%s",str1);
			fprintf(p33,"1\n");
			fprintf(p333,"%s",name_position);
		}
		else if(dis[4]<=dis[1]&&dis[4]<=dis[2]&&dis[4]<=dis[3]&&dis[4]<=dis[5])	
		{
			fprintf(p4,"%s",str1);
			fprintf(p44,"1\n");
			fprintf(p444,"%s",name_position);
		}
		else if(dis[5]<=dis[1]&&dis[5]<=dis[2]&&dis[5]<=dis[3]&&dis[5]<=dis[4])	
		{
			fprintf(p5,"%s",str1);
			fprintf(p55,"1\n");
			fprintf(p555,"%s",name_position);
		}
	}
	fclose(p1);
	fclose(p2);
	fclose(p3);
	fclose(p4);
	fclose(p5);
	fclose(p11);
	fclose(p22);
	fclose(p33);
	fclose(p44);
	fclose(p55);
	fclose(p111);
	fclose(p222);
	fclose(p333);
	fclose(p444);
	fclose(p555);
	return(0);
 }

