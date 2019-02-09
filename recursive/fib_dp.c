#include<stdio.h>

int fib(int n){
	int f[n+1];
	f[0]=0;
	f[1]=1;
	if(n<2){
		return f[n];
	}else{
		int i;
		for(i=2;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
		}
	return f[n];
	}
}

int main(){
	int a;
	printf("Input number:");
	scanf("%d",&a);

	int result=fib(a);

	printf("Fibonacci:%d",result);
}
