#include<stdio.h>
int main(){
	char ch;
	int a,b,c,A,B,C;
	printf("enter the value of ch");
	scanf("%d",&ch);
	switch(ch){
		case 1: printf("enter the value of a,b,c ");
		        scanf("%d %d %d",&a,&b,&c);
		         if(a+b>c||b+c>a||a+c>b){
		         	printf("this is a triangle");
				 }
				 break;
		case 2:printf("enter the value of angles");
		        scanf("%d %d %d",&A,&B,&C); 
				if(A+B+C==180){
					printf("this is a triangle");
				 }
				 break;
				
		default:printf("this is not a triangle");
	}
				return 0;      
		        
	}
