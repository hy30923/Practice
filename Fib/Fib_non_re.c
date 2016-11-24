#include <stdio.h>

// define F[0] = 0, F[1] = 1 ...

int main(){

	int i;
	int n;
	
	int a = 0, b = 1, c = 0;

	printf("Enter -1  to quit \n");

	while(1){
		
		printf("Input n: ");
		scanf("%d", &n);

		if(n == -1)  break;

		a = 1, b = 0, c = 0;

		for(i = 0 ; i < n ; i++){

			c = a + b;
			a = b;
			b = c;
		}

		printf("F[%d] = %d \n", n, c);
	}
}