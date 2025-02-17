#include<stdio.h>
int main(){
	int n,count=0,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i*i<=n;i++){
		if(n%i==0)
		printf("%d is  not a prime no.",n);
		else
		printf("%d is  a prime no.",n);
	}
	return 0;
}
	
