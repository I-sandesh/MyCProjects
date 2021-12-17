#include<stdio.h>
int main() {
    
    for(int i=1;i<=3;i++){
    for(int j=1;j<=15;j++){
    if(j<2){
    printf("🟤🟤");}
     else{
    printf("🔶");}
    }
    printf("\n");}
    for(int i=1;i<=3;i++){
    for(int j=1;j<=14;j++){
    if(j<2){
    printf("🟤🟤");}
    
    if(i==2&&j==8){
    printf("🌀");}
     else{
    printf("⚪");}
    }
    printf("\n");}
    for(int i=1;i<=3;i++){
    for(int j=1;j<=15;j++){
    if(j<2){printf("🟤🟤");}
    else{
     
    printf("💚");}
    }
    printf("\n");}
    for(int k=0;k<=8;k++){
    printf("🟤🟤");
    if(k%2==0){
    printf("     🌸    🌻    🌼");}
    printf("\n");}
    for(int a=0;a<2;a++){
    for(int b=0;b<4;b++){
    printf("☘️🌸☘️🌻☘️🌼");}
    printf("\n");
    }
    
    
    return 0;
}