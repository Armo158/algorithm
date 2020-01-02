#include <iostream>
#include <cstdio>
using namespace std;
int mknum(int a, int b, int c){
	return 100*a + 10*b + c;
}

int main(void){
	int a[3], b[3];
	scanf("%1d%1d%1d %1d%1d%1d", &a[2], &a[1], &a[0], &b[2], &b[1], &b[0]);
	a[0] = mknum(a[0], a[1], a[2]);
	b[0] = mknum(b[0], b[1], b[2]);
	
	if(a[0]<b[0])
		a[0]=b[0];
	cout<<a[0]<<endl;
	return 0;
}
