#include<stdio.h>
int main() {
    
    for(int i=1;i<=3;i++){
    for(int j=1;j<=15;j++){
    if(j<2){
    printf("π€π€");}
     else{
    printf("πΆ");}
    }
    printf("\n");}
    for(int i=1;i<=3;i++){
    for(int j=1;j<=14;j++){
    if(j<2){
    printf("π€π€");}
    
    if(i==2&&j==8){
    printf("π");}
     else{
    printf("βͺ");}
    }
    printf("\n");}
    for(int i=1;i<=3;i++){
    for(int j=1;j<=15;j++){
    if(j<2){printf("π€π€");}
    else{
     
    printf("π");}
    }
    printf("\n");}
    for(int k=0;k<=8;k++){
    printf("π€π€");
    if(k%2==0){
    printf("     πΈ    π»    πΌ");}
    printf("\n");}
    for(int a=0;a<2;a++){
    for(int b=0;b<4;b++){
    printf("βοΈπΈβοΈπ»βοΈπΌ");}
    printf("\n");
    }
    
    
    return 0;
}