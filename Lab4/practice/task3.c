#include <stdio.h>
#include <string.h>


struct Student {
	int id  ;
    char name[50];
	float cgpa;
	int  semster;
	char address[50]; 
	

};

int main(){
	struct Student std1;
	std1.id = 01;
	printf("The Student 1 is = %d \n  ", std1.id);
	std1.cgpa = 3.00;
	printf("The Student 1 Cgpa is =  %f \n ",std1.cgpa);
	std1.semster = 7;
	printf("The Student 1 Semster is =  %d \n ",std1.semster);
	strcpy(std1.name , "Sufyan Ahmad");
	printf("The Student 1 Name is  = %s \n ", std1.name);
	strcpy(std1.address , "Gujranwala Cantt ");
	printf("The Student 1 Address is = %s \n", std1.address);
	
}
