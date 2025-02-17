#include<stdio.h>
#include<string.h>
int palindromeString(char str[],int low,int high){
	if(low>=high)
	return 1 ;//true
     else if(str[low]!=str[high])
     return 0;
     	else
     	return palindromeString(str,low+1,high-1);
}
int main(){
	char str[10];
	printf("enter the string");
	gets(str);
	int low=0;
	int high =strlen(str)-1;
    if(palindromeString(str,low,high)){
    printf("String is palindrome");
}
    else{
	
    printf("String is not palindrome");
}
	return 0;
}
