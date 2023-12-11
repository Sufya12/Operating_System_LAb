int main(){
	int age1 = 10;
	printf("Age 1 is %p \n",age1);
	int age2 = 11;
	printf("Age 2 is %p \n",age2);
	int age3 = 12;
	printf("Age 3 is %p \n",age3);
	int age4 = 13;
	printf("Age 4 is %p \n",age4);
	int age5 = 14;
	printf("Age 5 is %p \n",age5);
	int age6 = 15;
	printf("Age 6 is %p \n",age6);
	
	
	//Pointer
	int* ptr;
	ptr = &age1;
	printf("The Age 1 is address %p  \n ",ptr);
	
	
	
	
	int*pc;
	int c;
	c= 55;
	
	printf("The address  of pc value %p \n ",&c);
	printf("The pc value %d \n  ",c);
	
	pc=&c;
	printf("The address  of pc value %p \n ",pc);
	printf("The pc value %d \n  ",*pc);
	
	c=11;
	printf("The address  of pc value %p \n ",pc);
	printf("The pc value %d \n ",*pc);
	
	
	*pc = 2;
	printf("The address  of pc value %p \n ",&c);
	printf("The pc value %d  ",c);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
