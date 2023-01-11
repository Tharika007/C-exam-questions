#include<stdio.h>
#include <string.h>
#include <stdlib.h>

	struct customer {
		int accnum;
		char name[50];
		char type[2];
		float amount;
	};
	
int main () {
	
	int i;	
	float total;
	struct customer c[2];
	
	for ( i = 0; i < 2; ++i) {
		
		printf("Enter Account number: ");
		scanf("%d", &c[i].accnum);
		
		printf("Enter Customer name: ");
		scanf("%s", &c[i].name);
		
		printf("Enter transaction type: ");
		scanf("%s", &c[i].type);
		
		printf("Enter the amount: ");
		scanf("%.f", &c[i].amount);
		
	}	
		
	for ( i = 0; i < 2; ++i ) { 
	
		total = total + c[i].amount;
		
	}
	printf("%.2f", total);	
}
