#include<stdio.h>
int countDigits(int n){
	if(n==0)
	return n;
     else
     return 1+countDigits(n/10);
}
int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n==0){
	printf("%d",1);
}
	else if(n<0){
		n=-n;
		printf("%d",countDigits(n));
	}
	else{
	
		printf("%d",countDigits(n));
	}
	return 0;
}
