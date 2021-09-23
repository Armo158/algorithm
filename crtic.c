#include <stdio.h>
#include <string.h>
int main(void){
	char num[100];
	int len;
	int alpa = 0;
	scanf("%s", num);
	len = (int)strlen(num)-1;
	while(len>=0){
		if(num[len] == '='){
			if(num[len-1] == 'c' || num[len-1] == 's'){
				len--;
			}
			else if(num[len-1]== 'z'){
				len--;
				if(len>0 && num[len-1] == 'd'){
					len--;
				}
			}
		}
		else if(num[len] == '-'){
			if(num[len-1] == 'c' || num[len-1]== 'd'){
				len--;
			}
		}
		else if(num[len] == 'j'){
			if(len<=0){}
			else if(num[len-1] == 'l' || num[len-1] == 'n'){
				len--;
			}
		}
		alpa++; len--;
	}
	printf("%d\n", alpa);
	return 0;
}
