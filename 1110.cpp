#include <stdio.h>

int pluscycle(int num);

int main(void){
	int num, wnm, cycle;
	cycle = 0;
	wnm = -1;
	scanf("%d", &num);
	wnm = pluscycle(num);
	cycle = 1;
	while(num != wnm){
		wnm = pluscycle(wnm);
		cycle++;
	}
	printf("%d\n", cycle);
	return 0;
}
int pluscycle(int num){
	return (num%10)*10 + (num%10+num/10)%10;
}
