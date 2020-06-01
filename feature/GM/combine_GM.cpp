#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	char str1[1000];
	char str2[1000];
	char str3[1000];
	char str4[1000];
	char str5[1000];
	char str6[1000];
	char str7[1000];
	char str8[1000];
	char str9[1000];
	char str10[1000];
	int i,j,k,l,m,n;
	FILE *p1=fopen("GM1.txt","r");
	FILE *p2=fopen("GM2.txt","r");
	FILE *p3=fopen("GM3.txt","r");
	FILE *p4=fopen("GM4.txt","r");
	FILE *p5=fopen("GM5.txt","r");
	FILE *p6=fopen("GM6.txt","r");
	FILE *p7=fopen("GM7.txt","r");
	FILE *p8=fopen("GM8.txt","r");
	FILE *p9=fopen("GM9.txt","r");
	FILE *p10=fopen("GM10.txt","r"); 
	freopen("GM.txt","w",stdout);
	while(fgets(str1,1000,p1))
	{
		fgets(str2,1000,p2);
		fgets(str3,1000,p3);
		fgets(str4,1000,p4);
		fgets(str5,1000,p5);
		fgets(str6,1000,p6);
		fgets(str7,1000,p7);
		fgets(str8,1000,p8);
		fgets(str9,1000,p9);
		fgets(str10,1000,p10);
		l=strlen(str1);
		str1[l-1]='\0';
		l=strlen(str2);
		str2[l-1]='\0';
		l=strlen(str3);
		str3[l-1]='\0';
		l=strlen(str4);
		str4[l-1]='\0';
		l=strlen(str5);
		str5[l-1]='\0';
		l=strlen(str6);
		str6[l-1]='\0';
		l=strlen(str7);
		str7[l-1]='\0';
		l=strlen(str8);
		str8[l-1]='\0';
		l=strlen(str9);
		str9[l-1]='\0';
		printf("%s %s %s %s %s %s %s %s %s %s",str1,str2,str3,str4,str5,str6,str7,str8,str9,str10);
	}
	
	return(0);
}

