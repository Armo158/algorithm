#include <stdio.h>

int main(){
	int N,X,i,Y;
	scanf("%d %d", &N, &X);
	for(i=0; i<N; i++){
		scanf("%d", &Y);
		if(Y<X)
			printf("%d ", Y);
	}
	printf("\n");
	return 0;
}
