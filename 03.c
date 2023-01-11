#include<stdio.h>
#include<assert.h>

float CalDiscount(int time, float totamount);
void DisplayGift(float finaltot);
float testCalDiscount(float tamount);


int main () {
	
	int spendtime;
	float totalamount;
	float finaltot;
	
	printf("Enter the spending time: ");
	scanf("%d", &spendtime);
	
	printf("Enter the Total amount: ");
	scanf("%f", &totalamount);
	
	finaltot = CalDiscount(spendtime,totalamount);
	printf("Total Payment is: %.2f\n", finaltot);
	
	DisplayGift(finaltot);
	testCalDiscount(totalamount);
		
}

float CalDiscount(int time, float totamount) {
	
	if ( time == 16 || time == 17 || time == 18 && totamount >= 5000) 
	{
		float discount;
		float total;
		
		discount = totamount * 10/100;
		total = totamount - discount;
		//printf("Total Payment is: %.2f", total);
		return total;
			
	}
	else if ( time == 20 || time == 21 || time == 22 && totamount >= 5000) 
	{
		float discount;
		float total;
		
		discount = totamount * 12/100;
		total = totamount - discount;
		//printf("Total Payment is: %.2f", total);
		return total;
			
	}
	if ( time == 16 || time == 17 || time == 18 && totamount < 5000 && totamount >= 2500) 
	{
		float discount;
		float total;
		
		discount = totamount * 7/100;
		total = totamount - discount;
		//printf("Total Payment is: %.2f", total);
		return total;
			
	}
	else if ( time == 20 || time == 21 || time == 22 && 5000>totamount >= 2500) 
	{
		float discount;
		float total;
		
		discount = totamount * 9/100;
		total = totamount - discount;
		//printf("Total Payment is: %.2f", total);
		return total;
			
	}
	else {
		("Invalid input.");
	}
}

void DisplayGift(float finaltot) {
	
	if ( finaltot >= 7000) {
		
		printf("You have achieved packet of milk");
	}
	else if ( finaltot >= 5000 && finaltot <= 6999) {
		
		printf("You have achieved 1kg of sugar");
	}	
	else if ( finaltot >= 3000 && finaltot <= 4999) {
		
		printf("You have achieved Pack of 6 eggs.");
	}	
	else {
		printf("Not capable to gift.");
	}	
}

float testCalDiscount(float tamount) {
	
	assert(tamount >= 2500);
	printf("correct");
}
