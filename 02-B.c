#include<stdio.h>

int main () {
	
	char bulb[4][4] = {0};
	int row, column;
	char red;
	int i = 4;
	int j = 4;
	
	for ( row = 0; row < 4; ++row) {
		for ( column = 0; column < 4; ++column) {
			printf("Enter the color R,G or B: " );
			scanf("%s", &bulb[row][column]);
		}
	}
	
	printf("******Entred colors********\n");
	
	for ( row = 0; row < 4; row++) {
		for ( column = 0; column < 4; column++) {
			printf("%c ", bulb[row][column]);
		}	
		printf("\n");
	}
	
	//red = bulb[0][0];
	printf("Red color positions\n");
	for ( row = 0; row < 4; ++row) {
		for ( column = 0; column < 4 ; ++column) {
			
			if ( bulb[row][column] == 'R') {
				printf("[%d %d]", row , column);
			}
//			else if ( bulb[row][column] == 'G') {				
//				printf("Green color positions: [%d %d]", row , column);
//			}
//			else if ( bulb[row][column] == 'B') {
//				printf("Blue color positions: [%d %d]", row , column);
//			}
		}
	}
}
