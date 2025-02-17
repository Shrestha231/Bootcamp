#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf(" ");
		}
	
		for(j=0;j<i+1;j++){ //cursor whi se start hoga fr space ke baad se
			if(j==0||i==n-1||j==i+1-1){
			
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
