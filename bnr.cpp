#include <stdio.h>

int main(void){
	int num[42] = {0, };
	int a;
	for(int i =0; i<10; i++){
		scanf("%d", &a);
		num[a%42]++;
	}
	a=0;
	for(int i=0;i<42;i++){
		if(num[i]>0){
			a++;	
		}
	}
	printf("%d\n", a);
	return 0;
}
