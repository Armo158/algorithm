#include <stdio.h>

int main(void){
	int C,N,k;
	float avg;
	int num[1000] = {0, };
	scanf("%d", &C);
	for(int i = 0; i < C; i++){
		k=0; avg =0;
		scanf("%d", &N);
		for(int j = 0; j<N; j++){
			scanf("%d", &num[j]);
			avg += (float)num[j];
		}
		avg /= (float)N;
		for(int j = 0; j<N; j++){
			if(num[j] > avg){
				k++;	
			}
		}
		avg = ((float)k/N)*100;
		printf("%.3f%\n", avg);
	}
	return 0;
}
