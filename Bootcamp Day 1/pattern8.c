#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(j==0||i==n-1||j==i){
			printf("*");
		}
		else{
			printf(" ");
		}
}
		printf("\n");
	}

	return 0;
}
