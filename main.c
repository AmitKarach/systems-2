#include <stdio.h>
#include "myBank.h"
int main(){
start();
char c;
printf("Transaction Type? :\n");
	printf("O - Open Account \n");
	printf("B - Balance Inquiry \n");
	printf("D - Deposit \n");
	printf("W - Withdrawal \n");
	printf("C - Close Account \n");
	printf("I - Interest \n");
	printf("P - Print \n");
	printf("E - Exit \n");
scanf(" %c",&c);
while(c!='E')
{
	bank(c);
	printf("Transaction Type? : \n");
	printf("O - Open Account \n");
	printf("B - Balance Inquiry \n");
	printf("D - Deposit \n");
	printf("W - Withdrawal \n");
	printf("C - Close Account \n");
	printf("I - Interest \n");
	printf("P - Print \n");
	printf("E - Exit \n");
	scanf(" %c",&c);
	
	
	
}
return 0;
}


