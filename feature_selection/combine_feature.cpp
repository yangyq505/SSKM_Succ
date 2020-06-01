#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
double x[50][5000]; 
int main()
{
	int i,j,k,l,m,n;
	char str[10000];
	char str1[10000];
	char name[100];
	FILE *p=fopen("Gini_sort.txt","r");
	freopen("../cluster/feature.txt","w",stdout);
	i=0;
	while(fgets(str,100,p))
	{
		l=strlen(str);
		str[l-1]='\0';
		sprintf(name,"%s.txt",str);
		FILE *p1=fopen(name,"r");
		j=0;
		while(fgets(str1,1000,p1))
		{
			l=strlen(str1);
			str1[l-1]='\0';
			x[i][j]=atof(str1);
			j++;
		}
		i++;
		fclose(p1);
	}
	m=i;
	n=j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%g ",x[j][i]);
		}
		printf("\n");
	}
	fclose(p);
	fclose(stdout);
	return(0);
 }

