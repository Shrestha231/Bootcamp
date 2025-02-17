#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char ch='A';
		for(j=0;j<=n-i;j++){
			printf("%c",ch);
			ch++;
		
		}
	   
	   for(j=1;j<2*i-1;j++){
	   	printf(" ");
	   }
	 int  p=65-i+2*2;
		for(k=0;k<n-i;k++){
			printf("%c",p);
			p--;
		}
		printf("\n");
	}
	return 0;
}
		
