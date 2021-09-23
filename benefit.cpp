#include <iostream>

using namespace std;

int main(void){
	int A,B,C;
	int min;
	cin>>A>>B>>C;
	if(C-B <= 0){
		min = -1;
	}
	else{
		min = (A/(C-B))+1;
	}
	cout<<min<<endl;
	return 0;
}
