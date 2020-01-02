#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int N,a,sum;
	sum = 0;
	cin>>N;
	for(int i = 0; i<N; i++){
		scanf("%1d", &a);
		sum += a;
	}
	cout<<sum<<endl;
}
