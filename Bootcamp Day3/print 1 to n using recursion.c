#include<stdio.h>
void printNumber(int curr,int n){
	if(curr>n){
	return ;
}
	printf("%d\n",curr);
    printNumber(curr+1,n);
}
int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n<=0){
	printf("Please enter the positive no.");
}
	else{
	printNumber(1,n);
	
}
	return 0;
}
