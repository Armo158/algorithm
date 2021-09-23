#include <stdio.h>


int main(void){
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%1d%1d%1d", &b, &c, &d);
	printf("%d\n", a*d);
	printf("%d\n", a*c);
	printf("%d\n", a*b);
	printf("%d\n", a*(100*b+10*c+d));
	return 0;
}
