#include <stdio.h>
#include <string.h>


struct Person{
	int id;
	char name[50];
	char address[50];
	
};

int main()
{



   struct Person employee;
   employee.id = 25;
   
   
   strcpy(employee.name,"Sufyan");
   printf("The Name is %s \n ",employee.name);



   printf("The Id is %d \n", employee.id);
	char name[50];
	printf("The of name is  ");
	scanf("%s",&name);
	printf("The name  %s",name);
	return 0;
	
}
