// Write a program in C to read any Month Number in integer and display the number of days for this month.

#include<stdio.h>
int main() {
	int month;
	printf("Enter the month in integer :");
	scanf("%d",&month);
	
	if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12) {
		printf("Month have 31 Days.");
	}
	else if(month == 2) {
		printf("Month have 28/29 Days.");
	}
	else {
		printf("Month have 30 Days.");
	}
}
