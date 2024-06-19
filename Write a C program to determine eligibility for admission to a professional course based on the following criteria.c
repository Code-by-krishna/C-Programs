// Write a C program to determine eligibility for admission to a professional course based on the following criteria: 

#include<stdio.h>
int main() {
	int math, phy, che, allsub, math_phy;
	printf("Input the marks obtained in Physics: ");
	scanf("%d",&phy);
	printf("Input the marks obtained in Chemistry: ");
	scanf("%d",&che);
	printf("Input the marks obtained in Math: ");
	scanf("%d",&math);
	
	allsub = math + phy + che;
	math_phy = math + phy;
	
	if(math >= 65 && phy >= 55 && che >= 50 && allsub >=190) {
		printf("The Canditate is eligible for admission.");
	}
	else if(math_phy >= 140) {
		printf("The Canditate is eligible for admission.");
	}
	else {
		printf("The Canditate is not eligible for admission.");
	}
	
}
