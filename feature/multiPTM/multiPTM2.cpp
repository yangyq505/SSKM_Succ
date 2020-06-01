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
	FILE *p1=fopen("../../name+position.txt","r");//¿µ∞±À·Œª÷√ 
	freopen("position-4.txt","w",stdout);
	while(fgets(str,1000,p1))
	{
		l=strlen(str);
		str[l-1]='\0';
		char *pp=strtok(str," ");
		printf("%s ",pp);
		pp=strtok(NULL," ");
		m=atoi(pp)-4;
		printf("%d\n",m);
	 } 
	
	return(0);
 }

