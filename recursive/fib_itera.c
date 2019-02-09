#include<stdio.h>

int fib(int n){
	if(n==0){
	return 0;
	}else if(n==1){
	return 1;
	}else{
	int a=0;
	int b=1;
	int i,c;
		for(i=1;i<n;i++){
			c=a+b;
			a=b;
			b=c;
		}
	return c;
	}
}

int main(){
	int a;
	printf("Input number:");
	scanf("%d",&a);

	int result=fib(a);

	printf("Fibonacci:%d",result);
}
