#include <stdio.h>

int main(){
	for(int i = 65; i <= 122; i++){
		if(i >= 91 && i <= 96)
		continue;

		
		char ch = i;
		printf("\n %c:%d",ch,ch);
		
	}
}
