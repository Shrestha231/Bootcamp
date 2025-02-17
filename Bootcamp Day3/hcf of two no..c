#include<stdio.h>
int hcf(int a,int b){
	if(a==0)
	return b;
	if(b==0)
	return a;
	else
	return hcf(b,a%b);
}
int main(){
	int a,b,result;
	printf("enter the value of a and b");
	scanf("%d %d",&a ,&b);
	result=hcf(a,b);
	printf("hcf=%d\n",result);
	return 0;
}
	
