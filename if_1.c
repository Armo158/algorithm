#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if((a-b)*(a-c)<=0)
		a = a;
	else if((b-a)*(b-c)<=0)
		a = b;
	else if((c-a)*(c-b)<=0)
		a = c;

	printf("%d\n", a);
	return 0;
}
