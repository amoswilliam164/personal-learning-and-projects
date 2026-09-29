/*
Name   : Amos William
Adm No : BCS-03-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: if....else Statement
*/

#include <stdio.h>
int main()
{
	int age;//%d
	char gender;//%c
	
	printf("What is your age:");
	scanf("%d", &age);
	
	printf("What's your gender (M for Male, F for Female):");
	scanf(" %c", &gender);
	
	if(age>=5&&age<12){
		printf("Age Category: Kids\n");
		printf("Recommented Games: Roblox\n");
	}
	
	else if(age>=12&&age<18){
		printf("Age Category: Juniors\n");
		printf("Recommented Games: Truck Simulator\N");
	}
	
	else if(age>=18&&age<25){
	    printf("Age Category: Young Adults\n");
		printf("Recommented Games: EUFA FC\n");	
	}
	
	else if(age>=25&&age<35){
		printf("Age Category: Adults\n");
		printf("Recommented Games: Call of Duty\n");
	}

	else if(age>=35&&age<45){
		printf("Age Category: Middle-Aged Adults\n");
		printf("Recommented Games: Didital Card Games\n");
	}
	
	else if(age>=45&&age<60){
		printf("Age Category: Seniors\n");
		printf("Recommented Games: Chess Games");
	}
	
	else if(age>=60){
		printf("Age Category: Boomers\n");
		printf("Recommented Games: VR Games");
	}
	
	else{
		printf("Invalid Input");
	}
	
	//include (gender=='M'||gender=='m') in the program
	
		
	return 0;
}