#include<stdio.h>

int binary_search(int a[],int n,int k){
	int left,right,mid;
	left=0;
	right=n-1;
	while(left<=right){
		mid=(left+right)/2;

		if(k==a[mid]){
			printf("Found number");
			break;
		}else if(k<a[mid]){
			right=mid-1;
		}else if(k>a[mid]){
			left=mid+1;
		}else{
		printf("no found");
		break;
		}
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

	binary_search(list,n,key);
	return 0;

}
