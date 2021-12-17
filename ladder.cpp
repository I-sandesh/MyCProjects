#include<stdio.h>
int main(){
	for(int i=0;i<=40;i++){
	for(int j=0;j<=5;j++){
		if(j==1||j==4){
			printf("|");
			
		}
		else if(i%3==0){
		
		printf("_");
	}
		else{
			printf(" ");
		}
	
	}
	printf("\n");
}
}

