#include<stdio.h>

int insert(int a[],int k,int n){
	int j=n;
	while(k<a[j]){
	 a[j+1]=a[j]; 		//將最後一筆資料往後挪移
	 j--;			//繼續向前檢查，直到新插入資料比較大為止
	}
	
	a[j+1]=k;		//最後將空下來的位置給新插入的資料
	return 0;
}


int insort(int a[],int count){ 		//排序第a[1]到a[count]筆資料
	int i;
	for(i=2;i<count;i++){
		insert(a,a[i],i-1);   //將第i筆資料插入至前面i-1筆以排序好的資料
	}

	printf("Number sorted:");
	for(i=1;i<count;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}

int main(){
	int count;
	scanf("%d",&count);
	count++;
	int a[count];
	a[0]=-1000000;

	int i;
	printf("Number to be sorted:");
	for(i=1;i<count;i++){
	scanf("%d",&a[i]);
	printf("%d",a[i]);
	}

	printf("\n");
	insort(a,count);
	return 0;

}
