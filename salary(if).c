#include<stdio.h>
int main(){
	float salary,bonus;
	int year;
	printf("Enter your salary : ");
	scanf("%f",&salary);
	printf("Enter service age : ");
	scanf("%d",&year);
	if(year>20){
		bonus=salary*0.2;
	}
	else{
		bonus=salary*0.05;
	}
	printf("Your Gross Salary is %.3f",salary+bonus);
	return 7111;
}
