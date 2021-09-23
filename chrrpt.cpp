#include <iostream>
#include <string.h>
using namespace std;

int main(void){
	int T,R,size;
	char S[20];
	cin>>T;
	for(int i=0; i<T; i++){
		cin>>R>>S;
		size = strlen(S);

		for(int j=0; j < size; j++){
			for(int k=0; k<R; k++){
				cout<<S[j];
			}
		}
		printf("\n");
	}
	return 0;
}
