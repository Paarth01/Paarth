#include <stdio.h>
#include <string.h>
int main(){

	char str[50];

	printf("Enter a string: ");
	gets(str);

	int num = 0;
	int alp = 0;

	for(int i = 0; i < strlen(str); i++){
		if (str[i] >= 65 && str[i] <= 122)
			alp++;
		else if(str[i] >= 48 && str[i] <= 57)
			num++;
	}

	printf("Count of numbers in the string: %d\n",num);
	printf("Count of alphabets in the string:%d",alp);

}
