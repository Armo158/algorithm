#include <stdio.h>

int main(void){
	int hour, min;
	scanf("%d %d", &hour, &min);

	min -= 45;
	if(min<0){
		min += 60;
		if(hour == 0){
			hour = 23;
		}
		else{
			hour--;
		}
	}
	printf("%d %d\n", hour, min);
	return 0;
}
