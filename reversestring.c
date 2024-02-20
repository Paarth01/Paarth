#include <stdio.h>
#include <string.h>
int main(){

	char str[50];

	printf("Enter a string: ");
	gets(str);

	int n = strlen(str);

	for(int i = 0; i < n / 2; i++){
		int temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
	printf("\n Final string is: ");
	puts(str);
}