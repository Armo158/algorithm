#include <stdio.h>

int main(void){
	int max, num;//N, min;
	int whr = 0;
	//scanf("%d", &N);
	for(int i = 0; i<9; i++){
		scanf("%d", &num);
		if(i==0){
			/*min = num;*/ max = num;
			whr = i+1;
		}
		else if(max<num){
			max = num;
			whr = i+1;
		}
		/*else if(min>num){
			min = num;
		}*/
	}
	printf("%d\n%d\n",max,whr);
	return 0;
}//reprograming10818to2562
