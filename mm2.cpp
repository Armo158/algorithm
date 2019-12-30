#include <stdio.h>

int main(void){
	int unit, num, chc;
	num=0; chc =0;
	for(int i = 0; i<8; i++){
		scanf("%d", &unit);
		if(num == 0){
			num = unit;
		}
		else if(num-unit == 1 || num-unit==-1){
			num = unit;
		}
		else{
			printf("mixed\n");
			chc = -1;
			break;
		}
	}
	if(num == 8 && chc == 0){
		printf("ascending\n");
	}
	else if(num == 1 && chc == 0){
		printf("descending\n");
	}
	return 0;
}
