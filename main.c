#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student{
	int ID;
	char name[10];
	double grade;
};

void main (void){
	struct student s1 = {24, "minjeong", 4.3};
	s1.ID = 123456;
	strcpy(s1.name, "minjeong");
	s1.grade = 4.2;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade: %f\n", s1.grade);
}

