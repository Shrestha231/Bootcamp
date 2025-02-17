#include<stdio.h>
#include<string.h>
int Binarysearch(int arr[],int low,int high,int key){
	if(low>high)
	return -1;
	int mid=(low+high)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key)
	return Binarysearch(arr,low,mid-1,key);
	else
	return Binarysearch(arr,mid+1,high,key);
	
}
	int main(){
		int n,i,arr[10],key,res;
		printf("enter the no. of elements");
		scanf("%d",&n);
		printf("enter the elements");
		for(i=0;i<n;i++){
			//printf("enter the elements");
			scanf("%d",&arr[i]);
		}
			for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		int low=0;
		int high =n-1;
		printf("enter the elements which has to be searched\n");
		scanf("%d",&key);
		res=Binarysearch(arr,low,high,key);
		if(res==-1){
			printf("element not present in an array");
		}
		else{
			printf("element  searched successfully");
		}
		return 0;
		}
		
		
	
