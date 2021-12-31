#include<stdio.h>
int main(){
	int x,y;
	printf("Enter X coordinate : ");
	scanf("%d",&x);
	printf("Enter Y coordinate : ");
	scanf("%d",&y);
	if(x==0 && y==0){
		printf("(%d,%d) lies at Origin",x,y);
	}
		if(x!=0 && y==0){
		printf("(%d,%d) lies at X-Axis",x,y);
	}
		if(x==0 && y!=0){
		printf("(%d,%d) lies at Y-Axis",x,y);
	}
		if(x!=0 && y!=0){
		printf("(%d,%d) lies at Quadrant",x,y);
	}
	return 7111;
}
