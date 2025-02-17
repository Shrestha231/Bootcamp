#include<stdio.h>
int main(){
	int i,j,n;
	//char ch='A';
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		 char ch='A';
		for(j=0;j<n-i-1;j++){
			printf(" ");
		}
		for(j=0;j<i+1;j++){
	
			printf("%c",ch++);
				
		}
		int p=65+i-1;
		for(j=0;j<i;j++){
			printf("%c",p);	
			p--;
		}
		
		printf("\n");
	}
	return 0;
}
