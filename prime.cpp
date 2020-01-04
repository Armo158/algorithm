#include <iostream>

using namespace std;

int main(){
	int N, num, prime, check;
	cin>>N;
	prime = 0;
	for(int i=0; i<N; i++){
		cin>>num;
		check = 0;
		if(num == 1){}
		else{
			for(int j = 2; j<num; j++){
				if(num%j == 0){
					check = 1;
					break;
				}
			}
			if(check == 0)
				prime++;
		}
	}
	cout<<prime<<endl;
	return 0;
}
