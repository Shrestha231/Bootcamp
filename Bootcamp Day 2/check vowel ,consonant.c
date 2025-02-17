#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("enter the value of ch");
	scanf("%c",&ch);
	ch=tolower(ch);
	if(ch>='a'&&ch<='z'){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			printf("this is vowel");
		}
		else{
			printf("this is consonant");
		}
	}
	else{
			printf("this is special character");
		}
	
		return 0;
	}
