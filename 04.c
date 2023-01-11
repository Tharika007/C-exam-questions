#include<stdio.h>
#include<string.h>

int main () {
	
	FILE* filewrite;
	filewrite = fopen("attendance.txt", "w");
	
	char empno[50];
	char name[50];
	char attendance[7];
	int numemp, days;
	char key[10];
	int total;
	int c;
	c = getc(fileRead);
	
	if ( filewrite == NULL) {
		
		printf("Not file is found.");
		return -1; //if file is not founded stop the program
	}
	
	for ( numemp = 0; numemp < 2; ++numemp) 
	{
	
		printf("Enter employee No: ");
		scanf("%s", &empno);
	
		printf("Enter Name: ");
		scanf("%s", &name);
		
		for ( days = 0; days < 7; ++days) 
		{
		
			printf("Enter attendance: ");
			scanf("%s", &attendance[days]);	
		}
		
		fprintf(filewrite, "%s %5s" "%10s " " " "\n", empno,name,attendance);
	}
	
	fclose(filewrite);
	
	FILE *fileRead;
	fileRead = fopen("attendance.txt", "r");
	
	if ( fileRead == NULL) {
		printf("File cannot be opened.");
		return -1;
	}
	
	fscanf(fileRead, "%s %s %s", empno, name, attendance);
	
	while (!feof(fileRead)) {
		
		printf("%s %s %s\n", empno, name,attendance);
		fscanf(fileRead, "%s %s %s", empno, name, attendance);
		
		printf("Enter employee id to see attendance: ");
		scanf("%s", &key);
		
		while ( c != EOF) { 
		
		if (strcmp(key,empno) == 1)		
		printf("hi");
//			for ( days = 0; days < 7; ++days) {
//				if ( attendance[days] == 1) {
//					total = total + 1;
//					printf("working days: %d", total);
//				}
//			}
//		}
		
	}
}
	fclose(fileRead);
	return 0;
		
}





