#include<stdio.h>
int main(){
	int year;
	printf("Enter the year to check whether it is leap year or not : ");
	scanf("%d",&year);
	if(year%100==0){
		if(year%400==0){
			printf("%d is leap year",year);
		}
		else{
			printf("%d is not a leap year",year);
		}
	}
	else{
			if(year%4==0){
			printf("%d is leap year",year);
		}
		else{
			printf("%d is not a leap year",year);
		}
	}
	return 0;
}
