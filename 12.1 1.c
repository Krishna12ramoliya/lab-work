#include<stdio.h>
#include<string.h>
struct student
{
	int ID;
	char NAME[100];
	int AGE;
	char COURSE[100];
	char CITY[100];
	char STD[100];
	char SCHOOL[100];
};

int main()
{
      struct student s1,s2,s3;
	s1.ID=100;
	  strcpy(s1.NAME,"john");
	s1.AGE=19;
	strcpy(s1.COURSE,"C");
	strcpy(s1.CITY,"suart");
	strcpy(s1.STD,"collage");
	strcpy(s1.SCHOOL,"s.p.k.m\n");
	
	s2.ID=101;
	   strcpy(s2.NAME,"hendry");
	s2.AGE=19;
	strcpy(s2.COURSE,"C++");
	strcpy(s2.CITY,"vadodra");
	strcpy(s2.STD,"collage");
	strcpy(s2.SCHOOL,"p.p savani\n");
    
	s3.ID=102;
    	strcpy(s1.NAME,"peter");
	s3.AGE=19;
	strcpy(s3.COURSE,"java");
	strcpy(s3.CITY,"ahemdabad");
	strcpy(s3.STD,"collage");
	strcpy(s3.SCHOOL,"red&white\n");

   
    printf("ID:%d\nNAME:%s\nAGE:%d\nCOURSE:%s\nCITY:%s\nSTD:%s\nSCHOOL:%s\n",s1.ID,s1.NAME,s1.AGE,s1.COURSE,s1.CITY,s1.STD,s1.SCHOOL);
	printf("ID:%d\nNAME:%s\nAGE:%d\nCOURSE:%s\nCITY:%s\nSTD:%s\nSCHOOL:%s\n",s2.ID,s2.NAME,s2.AGE,s2.COURSE,s2.CITY,s2.STD,s2.SCHOOL);
    printf("ID:%d\nNAME:%s\nAGE:%d\nCOURSE:%s\nCITY:%s\nSTD:%s\nSCHOOL:%s\n",s3.ID,s3.NAME,s3.AGE,s3.COURSE,s3.CITY,s3.STD,s3.SCHOOL);

}
/*
ID:100
NAME:peter
AGE:19
COURSE:C
CITY:suart
STD:collage
SCHOOL:s.p.k.m

ID:101
NAME:hendry
AGE:19
COURSE:C++
CITY:vadodra
STD:collage
SCHOOL:p.p savani

ID:102
NAME:
AGE:19
COURSE:java
CITY:ahemdabad
STD:collage
SCHOOL:red&white


--------------------------------
*/