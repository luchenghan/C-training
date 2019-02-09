#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
	char tmp=*a;
	*a=*b;
	*b=tmp;	
}
void perm(char list[],int i,int n){
	int j;
	if(i==n){
	for(j=0;j<=n;j++){
		printf("%c",list[j]);
	}
	printf("\n");
	}else{
		for(j=i;j<=n;j++){
			swap(&list[i],&list[j]);
			perm(list,i+1,n);
			swap(&list[i],&list[j]);
		}
	}
}
int main(){
	
	int n,i;
	printf("Input length:");
	scanf("%d",&n);
	fflush(stdin);
	char list[n];
	printf("Input %d data:",n);
	for(i=0;i<n;i++){
	scanf(" %c",&list[i]);
	}
	//char list[]={'a','b','c'};
	//int n=strlen(list);
	perm(list,0,n-1);
	
}

