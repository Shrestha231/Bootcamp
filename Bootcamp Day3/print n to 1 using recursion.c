#include<stdio.h>
int printNumber(int n){
	if(n==1){
	return n;
}
	printf("%d\n",n);
    printNumber(n-1);
}
int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n<=0){
	printf("Please enter the positive no.");
}
	else{
		printf("%d",printNumber(n));
	
}
	return 0;
}
