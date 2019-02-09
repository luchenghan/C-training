#include<stdio.h>

void swap(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}


int bubblesort(int a[],int n){
	int i,j,flag;
	for(i=0;i<=n-1;i++){ //n個數字排序，只用n-1次
		int flag=0;	//表示無發生交換
		for(j=0;j<n-i;j++){ 	//從第一個數字開始比較，直到最後一個數字
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				flag=1;
			}
		}
	if(flag==0) break;	//此回合沒有發生交換
	}	
}
int main(){
	int count,i;
	scanf("%d",&count);
	int list[count];
	printf("Number to be sort:");
	for(i=0;i<count;i++){
		scanf("%d",&list[i]);
		printf("%d",list[i]);
	}
	printf("\n");
	bubblesort(list,count);
	printf("Number Sorted:");
	for(i=0;i<count;i++){
		printf("%d",list[i]);
	}
return 0;
}
