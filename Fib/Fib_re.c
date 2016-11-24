#include <stdio.h>

// define F[0] = 0, F[1] = 1 ...

int Fib(int n){

	if(n == 0)	return 0;
	if(n == 1)	return 1;
	
	return Fib(n-1) + Fib(n-2);
}



int main(){

	int i;
	int n;

	printf("Enter -1  to quit \n");

	while(1){
		
		printf("Input n: ");
		scanf("%d", &n);

		if(n == -1)  break;

		printf("F[%d] = %d \n", n, Fib(n));
	}
}