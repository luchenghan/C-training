#include<stdio.h>

int factorial_iterative(int n){
	if(n==0){
		return 1;
	}
	else{
		int k=1;
		int i;
		for(i=1;i<=n;i++){
			k=k*i;
		}
		return k;	
	}
}

int main(){
	int a;
	printf("Input number:");
	scanf("%d",&a);

	int result=factorial_iterative(a);

	printf("Factorial:%d",result);
}
