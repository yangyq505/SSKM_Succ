#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
char str[200000][50];
int main()
{
	int i,j,k,l,m,n;
	char s[10000];
	FILE *p=fopen("Succinylation_position.txt","r");
	FILE *p1=fopen("position+7.txt","r");
	freopen("../../feature_selection/198.txt","w",stdout);
	i=0;
	while(fgets(str[i++],1000,p));
	while(fgets(s,1000,p1))
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(s,str[j])==0)
			{
			   break;
			}
		}
		if(j<i)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	
	return(0);
 }

