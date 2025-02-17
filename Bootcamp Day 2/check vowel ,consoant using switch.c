#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("enter the value of ch");
	scanf("%c",&ch);
	ch=tolower(ch);
	if(ch>='a'&&ch<='z'){
		switch(ch){
			case 'a':
		    case 'e':
		    case 'i':
		    case 'o': 
			case 'u':
			printf("this is vowel");
			break;
			default:printf("this is consonant");
		}
	}
		    return 0;	
		}
