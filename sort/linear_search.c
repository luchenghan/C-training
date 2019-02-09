#include<stdio.h>
int linear_search(int a[],int n,int k){
	int flag=0;
	int i;
	for(i=0;i<n;i++){
	if(k==a[i]){
		flag=1;         //seach到key值，則將flag=1
		printf("Found number");
	}
	}

	if(flag==0){
		printf("Not Found");
	}
}



int main(){
	int n;
	printf("Enter array length:");
	scanf("%d",&n);
	int list[n];
	int i;
	printf("Enter sorted number:");
	for(i=0;i<n;i++){
		scanf("%d",&list[i]);	
	}
	printf("current number:");
	for(i=0;i<n;i++){
	printf("%d",list[i]);
	}
	printf("\n");
	int key;
	printf("Find key:");
	scanf("%d",&key);

	linear_search(list,n,key);
	return 0;
}
