#include<stdio.h>
#include<math.h>
int iscubeFree(int n){
	int i;
	for(i=2;i<=cbrt(n);i++){
		if(n%(i*i*i)==0){
			return 0;
		}
	}
	return 1;
}
void findAandB(int n){
	int a;
	for(a=1;a<=cbrt(n);a++){
		int r=a*a*a;
		if(n%r==0){
			int b=n/r;
			if(iscubeFree(b)){
				printf("a=%d b=%d",a,b);
			}
		}
	}
}
int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	findAandB(n);
	iscubeFree(n);
	return 0;
}
