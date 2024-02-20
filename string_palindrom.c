#include <stdio.h>
#include <string.h>
int main()
{

	char str[50];

	printf("Enter a string: ");
	scanf("%s",&str);

	int n = strlen(str);
	int flag = 0;

	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] != str[n - i - 1])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1){
		printf("String is not pallindrome!");
	}
	else{
		printf("String is pallindrome!");
	}
}