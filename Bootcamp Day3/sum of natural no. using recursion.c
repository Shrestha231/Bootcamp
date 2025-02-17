#include<stdio.h>
int sum(int n){
	if(n==0)
	return n;
	else
	return n+sum(n-1);
}
int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("Sum of natural number=%d",sum(n));
	return 0;
}
