#include<stdio.h>
int fib(int n){
	if(n==0)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("Sum of natural number=%d",fib(n));
	return 0;
}
