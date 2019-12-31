#include <iostream>
using namespace std;

int func(int a);
int main(void){
	int N;
	cin>>N;
	cout<<func(N)<<endl;
	return 0;
}

int func(int a){
	int num = 0;
	if(a<100)
		return a;
	else{
		for(int i = 100; i<=a; i++){
			if((i/100)+(i%10)==2*((i/10)%10))
				num++;
		}
		return num+99;
	}

}
