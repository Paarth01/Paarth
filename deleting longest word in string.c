#include <stdio.h>

int main() {
    char str[1000]; 
    char longestWord[100]; 
    int i, j, k, length = 0, maxLength = 0, start = 0;
    
    printf("Enter a multi-word string: ");
    fgets(str, sizeof(str), stdin); 
    

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if(length > maxLength) {
                maxLength = length;
                start = i - length;
            }
            length = 0;
        }
    }
    

    for(j = 0, k = start; j < maxLength; j++, k++) {
        longestWord[j] = str[k];
    }
    longestWord[j] = '\0'; 
    
    
    for(i = start; str[i] != '\0'; i++) {
        str[i] = str[i + maxLength];
    }
    
    printf("The longest word '%s' has been deleted.\n", longestWord);
    printf("Updated string: %s\n", str);
    
  return 0;
}