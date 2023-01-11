#include<stdio.h> 

int main () {
	
	char coursetype;	//declaring variables
	int count = 1;
	int hoscount = 0, mancount = 0, fincount = 0;
	float hostotal,mantotal,fintotal;;
	
	while ( count <= 100) {		//getting 100 of registrations
		
		printf("Please enter course type: ");	//getting user inputs
		scanf("%s", &coursetype);
		
		if ( coursetype == 'H' || coursetype == 'h') {	//checks course types
			hoscount = hoscount + 1;					//getting counts
			hostotal = hostotal + 1500;
			++count;
		}
		else if ( coursetype == 'M' || coursetype == 'm') {
			mancount = mancount + 1;
			mantotal = mantotal + 2000;
			++count;
		}
		else if ( coursetype == 'F' || coursetype == 'f') {
			fincount = fincount + 1;
			fintotal = fintotal + 2500;
			++count;
		}
		else {
			printf("Invalid course type\n");
		}
	}
	printf("Total number of students registered for Hospitility Management: %d\n", hoscount);
	printf("Total registration fee of Hospitility management: %.2f", hostotal);
	printf("\n");
	printf("Total number of students registered for Diploma in Marketing: %d\n", mancount);
	printf("Total registration fee of Diploma in Marketing: %.2f", mantotal);
	printf("\n");
	printf("Total number of students registered for Diploma in Finance: %d\n", fincount);
	printf("Total registration fee of Diploma in Finance: %.2f", fintotal);	
}
