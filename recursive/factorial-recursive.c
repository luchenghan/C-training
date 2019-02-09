#include<stdio.h>

int factorial_recursive(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*factorial_recursive(n-1);
	}
}

int main(){
	int a;

	printf("Input number:");
	scanf("%d",&a);
	
	int result=factorial_recursive(a);

	printf("Factorial:%d\n",result);
}
