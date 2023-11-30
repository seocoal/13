#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	
	int ID;
	char name[100];
	float grade;
		
};


int main(int argc, char *argv[]) {
	
	struct student s1 = {2211408, "JIYOON", 4.3};
	
	s1.ID= 123456;
	s1.name[0]="c";
	s1.grade=0.7;
	
	printf("ID: %i\n", s1.ID);
	printf("name: %c\n", s1.name);
	printf("grade: %f\nn", s1.grade);
	

	return 0;
}
