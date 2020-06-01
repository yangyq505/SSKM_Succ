#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[10000];
	char str1[50000];
	int i,j,k,l,m,n;
	FILE *p1=fopen("test_1.txt","r");
	FILE *p2=fopen("test_2.txt","r");
	FILE *p3=fopen("test_3.txt","r");
	FILE *p4=fopen("test_4.txt","r");
	FILE *p5=fopen("test_5.txt","r");
	FILE *p11=fopen("label1.txt","r");
	FILE *p22=fopen("label2.txt","r");
	FILE *p33=fopen("label3.txt","r");
	FILE *p44=fopen("label4.txt","r");
	FILE *p55=fopen("label5.txt","r");
	FILE *p111=fopen("test1.txt","w");
	FILE *p222=fopen("test2.txt","w");
	FILE *p333=fopen("test3.txt","w");
	FILE *p444=fopen("test4.txt","w");
	FILE *p555=fopen("test5.txt","w");
	while(fgets(str,10000,p1))
	{
		fgets(str1,10000,p11);
		l=strlen(str1);
		str1[l-1]='\0';
		fprintf(p111,"%s",str1);
		l=strlen(str);
		str[l-1]='\0';
		n=1;
		char *pp=strtok(str," ");
		while(pp!=NULL)
		{
			fprintf(p111," %d:%s",n++,pp);
			pp=strtok(NULL," ");
		}
		fprintf(p111,"\n");
		
	}
	fclose(p111);
	while(fgets(str,10000,p2))
	{
		fgets(str1,10000,p22);
		l=strlen(str1);
		str1[l-1]='\0';
		fprintf(p222,"%s",str1);
		l=strlen(str);
		str[l-1]='\0';
		n=1;
		char *pp=strtok(str," ");
		while(pp!=NULL)
		{
			fprintf(p222," %d:%s",n++,pp);
			pp=strtok(NULL," ");
		}
		fprintf(p222,"\n");
		
	}
	fclose(p222);
	while(fgets(str,10000,p3))
	{
		fgets(str1,10000,p33);
		l=strlen(str1);
		str1[l-1]='\0';
		fprintf(p333,"%s",str1);
		l=strlen(str);
		str[l-1]='\0';
		n=1;
		char *pp=strtok(str," ");
		while(pp!=NULL)
		{
			fprintf(p333," %d:%s",n++,pp);
			pp=strtok(NULL," ");
		}
		fprintf(p333,"\n");
		
	}
	fclose(p333);
	while(fgets(str,10000,p4))
	{
		fgets(str1,10000,p44);
		l=strlen(str1);
		str1[l-1]='\0';
		fprintf(p444,"%s",str1);
		l=strlen(str);
		str[l-1]='\0';
		n=1;
		char *pp=strtok(str," ");
		while(pp!=NULL)
		{
			fprintf(p444," %d:%s",n++,pp);
			pp=strtok(NULL," ");
		}
		fprintf(p444,"\n");
		
	}
	fclose(p444);
	while(fgets(str,10000,p5))
	{
		fgets(str1,10000,p55);
		l=strlen(str1);
		str1[l-1]='\0';
		fprintf(p555,"%s",str1);
		l=strlen(str);
		str[l-1]='\0';
		n=1;
		char *pp=strtok(str," ");
		while(pp!=NULL)
		{
			fprintf(p555," %d:%s",n++,pp);
			pp=strtok(NULL," ");
		}
		fprintf(p555,"\n");
		
	}
	fclose(p555);
}

