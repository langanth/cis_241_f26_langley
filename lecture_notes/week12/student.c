#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
	char name[50];
	int age;
	double gpa;
} Student;

/*
double birthday(struct Student student){
	student.age += 1;
	return student.age;
}*/

void real_birthday(struct Student *stud){
	stud->age += 1;
}

void print_info(struct Student *student){
	printf("Name: %s\n", student->name);
	printf("Age: %d\n", student->age);
	printf("GPA: %.2f\n", student->gpa);
}

int main(void){
	
	//Student student1;
	Student *student1;
	student1->age = 20;
	student1->gpa = 3.75;
	printf("Enter student name: ");
	scanf("%49s", student1->name);
	
	printf("Name: %s\n", student1->name);
	printf("Age: %d\n", student1->age);
	printf("GPA: %.2f\n", student1->gpa);
	//int age = birthday(student1);
	print_info(student1);
	real_birthday(student1);
	print_info(student1);
	return 0;

}
